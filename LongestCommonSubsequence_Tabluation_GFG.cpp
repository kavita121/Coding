//Longest Common Subsequence
//GFG ACCEPTED
//Tabluation


#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    
    
    int lcs(int m, int n, string x, string y)
    {
        int dp[m+1][n+1];
        
        for(int i =0; i<=m; i++)
            dp[i][0] = 0;
            
        for(int i=0; i<=n; i++)
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
        
        return dp[m][n];
    }
};



int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}