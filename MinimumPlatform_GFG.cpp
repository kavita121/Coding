// Program to find minimum number of platforms required on a railway station
//GFG ACCEPTED


#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int arr[], int dep[], int n)
    {
        //sorting arrival and departure arrays
        sort(arr, arr+n);
        sort(dep, dep+n);
        
        int i=1, j = 0;
        int needPlat = 1, maxPlat = 1;
        
        //incrementing i when the departure time of jth train is greater than the current train's arrival time
        //when new train arrives we increase the number of platforms and update the needed platform if the current one is larger
        
        while(i < n && j < n)
        {
            if(arr[i] <= dep[j])
            {
                i++;
                maxPlat++;
            }
            else
            {
                j++;
                maxPlat--;
            }
            needPlat = max(maxPlat, needPlat);
        }
        
        return needPlat;
        
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
} 