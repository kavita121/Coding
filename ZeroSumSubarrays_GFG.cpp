// Zero Sum Subarrays 
// GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) 
    {
        map<ll, int> prefix;
        ll sum = 0;
        
        ll count = 0;
        
        for(int i=0; i<n; i++)
        {
            sum += arr[i];

            //If prefix sum is 0 we increment the counter by 1
            if(sum == 0)
                count++;
                
            if(prefix.find(sum) == prefix.end())
            {
                prefix.insert({sum, 1});
            }
            else
            {
                //Then we check whether the prefix sum is already present in map. 
                //If it is present it means it is repeated so we add the number of times prefix sum is present in map to the counter
                count += prefix[sum];

                //Increment the count of prefix sum obtained, in map
                prefix[sum]++;
            }
        }
        
        return count;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
} 