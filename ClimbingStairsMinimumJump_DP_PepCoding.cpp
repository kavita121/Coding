//Climbing Stairs Minimum jump
//correct

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    vector<long int> arr(n);
    for(long int i=0; i<n; i++)
        cin>>arr[i];
    long int dp[n+1];
    memset(dp, -1, n+1);
    dp[n] = 0;
    for(long int i=n-1; i>=0; i--)
    {
        if(arr[i] > 0)
        {
            long int minm = (int) INFINITY;
            for(long int j = 1; j <= arr[i] && i+j < (n+1); j++)
            {
                if( dp[i+j] != -1 )
                {
                    minm = min(minm, dp[i+j]);
                }
            }
            if(minm != (int) INFINITY)
            {
                dp[i] = minm+1;
            }
        }
    }
    cout<<dp[0]<<endl;
    for(long int i=0; i<=n; )
    {
        cout<<dp[i]<<" ";
        i += dp[i];
    }
    return 0;
}
