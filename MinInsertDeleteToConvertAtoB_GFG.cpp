//Minimum number of deletions and insertions
//GFG ACCEPTED
//DP


#include <bits/stdc++.h>
using namespace std;


class Solution{
		

	public:
	int minOperations(string x, string y) 
	{ 
	    int m = x.size(), n = y.size();
	    int dp[m+1][n+1];
        
        //using LCS
        for(int i=0; i<=m; i++)
            dp[i][0] = 0;
            
        for(int i=1; i<=n; i++)
            dp[0][i] = 0;
            
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(x[i-1] == y[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        int ans = (m + n) - 2*dp[m][n];
        
        return ans;
	} 
};


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}