//Smallest subarray with sum greater than x 
//O(n^2)
GFG ACCEPTED


#include<bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> arr, int x)
{
    int ans = (int) INFINITY;
    for(int i=0; i<arr.size(); i++)
    {
        int sum = 0, count = 0;
        for(int j=i; j<arr.size(); j++)
        {
            sum += arr[j];
            count++;
            if(sum > x)
            {
                ans = min(ans, count);
                break;
            }
        }
    }
    return ans;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<subarraySum(arr, x)<<endl;
    }
	return 0;
}