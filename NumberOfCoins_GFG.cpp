//Number Of coins
//GFG ACEPTED
//DP


#include <bits/stdc++.h>
using namespace std;


class Solution{

    //using unbounded knapsack just initialisation and update condition is different
	public:
	int minCoins(int coins[], int m, int v) 
	{ 
	    int dp[m+1][v+1];
        
	    
	    for(int i=0; i<=m; i++)
	        dp[i][0] = 0;
	    
	    for(int i=0; i<=v; i++)
	        dp[0][i] = INT_MAX-1;
	        
	    for(int i=1; i<=m; i++)
	    {
	        for(int j=1; j<=v; j++)
	        {
	            if(j >= coins[i-1])
	            {
	                dp[i][j] = min(dp[i-1][j], dp[i][j-coins[i-1]]+1);
	            }
	            else
	            {
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    
	    if(dp[m][v] != INT_MAX-1)
	        return dp[m][v];
	    else
	        return -1;
	} 
	  
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}