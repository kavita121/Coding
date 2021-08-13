//Longest Common Subsequence
//GFG ACCEPTED
//Memoization


#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    
    //I was getting TLE so by passing the strings s1 and s2 by reference, solution got accepted
    int lcsHelper(int x, int y, string &s1, string &s2, int dp[][1001])
    {
        if(x < 0 || y < 0)
            return 0;
            
        if(dp[x][y] != -1)
            return dp[x][y];
        
        if(s1[x] == s2[y])
        {
            return dp[x][y] = 1+lcsHelper(x-1, y-1, s1, s2, dp);
        }
        else
            return dp[x][y] = max( lcsHelper(x-1, y, s1, s2, dp), lcsHelper(x, y-1, s1, s2, dp) );
    }
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][1001];
        memset(dp, -1, sizeof(dp));
        
        
        int ans = lcsHelper(x-1, y-1, s1, s2, dp);
        
        return ans;
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