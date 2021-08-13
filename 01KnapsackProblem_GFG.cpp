//0-1 Knapsack Problem
//GFG ACCEPTED
//411. Dyanmic Programming

#include<bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        int dp[n+1][w+1];
        
        for(int i=0; i<=n; i++)
            dp[i][0] = 0;
            
        for(int i=0; i<=w; i++)
            dp[0][i] = 0;
            
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=w; j++)
            {
                if(j >= wt[i-1])
                {
                    dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
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



int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
} 