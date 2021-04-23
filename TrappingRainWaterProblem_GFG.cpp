//Trapping Rainwater Problem
//GFG ACCEPTED
//Arrays

#include<bits/stdc++.h>

using namespace std;

int trapRainWater(int arr[], int n)
{
    if(n==1 || n==0)
        return 0;
    int left[n], right[n];
    left[0] = arr[0];
    for(int i=1;i<n; i++)
    {
        left[i] = max(arr[i], left[i-1]);
    }
    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        right[i] = max(right[i+1], arr[i]);
    }
    int water = 0;
    for(int i=1; i<n-1; i++)
    {
        water += min(left[i], right[i]) - arr[i];
    }
    return water;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        for(int i=0; i<n; i++)
            cin>>height[i];
        int ans;
        ans = trapRainWater(height,n);
        cout<<ans<<endl;
    }
	return 0;
}