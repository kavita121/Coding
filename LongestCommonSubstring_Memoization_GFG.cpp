//Longest Common Substring
//GFG ACCEPTED


#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    int ans = 0;
    
    //recursion + memoization
    int lcsHelper(string &s1, string &s2, int n, int m, int dp[][1001])
    {
        if(n==0 || m==0)
            return 0;
            
        if(dp[n][m] != -1)
            return dp[n][m];
            
        lcsHelper(s1, s2, n-1, m, dp);
        lcsHelper(s1, s2, n, m-1, dp);
        
        if(s1[n-1] == s2[m-1])
        {
            int temp = 1+lcsHelper(s1, s2, n-1, m-1, dp);
            ans = max(ans, temp);
            return dp[n][m] = temp;
            
        }
        else
        {
            return dp[n][m] = 0;
        }
    }
    
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int dp[n+1][1001];
        
        memset(dp, -1, sizeof(dp));
        
        lcsHelper(s1, s2, n, m, dp);
        
        return ans;
    }
};



int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}