//Knapsack with Duplicate Items 
//Bounded Knapsack
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:

    int knapSack(int n, int w, int val[], int wt[])
    {
        int dp[n+1][w+1];
        
        for(int i = 0; i <= n; i++)
            dp[i][0] = 0;
            
        for(int i  = 1; i <= w; i++)
            dp[0][i] = 0;
            
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=w; j++)
            {
                if(j >= wt[i-1])
                {
                    dp[i][j] = max( dp[i-1][j], (dp[i][j-wt[i-1]] + val[i-1]) );
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        
        return dp[n][w];
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
} 