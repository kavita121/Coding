// 

#include<bits/stdc++.h>
using namespace std;


// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n)
{
    long int jumps[n];
    memset(jumps, -1, n);
    jumps[n-1] = 0;
    for(int i=n-2; i>=0 ;i--)
    {
        if(arr[i] > 0)
        {
            long int minm = (int) INFINITY;
            for(int j=1; j<=arr[i] && (i+j) < n ; j++)
            {
                if(jumps[i+j] != -1)
                    minm = min(minm, jumps[i+j]);
            }
            if(minm != (int)INFINITY)
            {
                jumps[i] = minm+1;
            }
            else
                jumps[i] = -1;
        }
        else
            jumps[i] = -1;
    }
    return jumps[0];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}