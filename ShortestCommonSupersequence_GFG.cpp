//Shortest Common Supersequence
//GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string x, string y, int m, int n)
    {
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
        
        int ans = dp[m][n];
        
        return (m+n-ans);
    }
};



int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}