//Minimum Deletions dp
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minimumNumberOfDeletions(string s) 
    { 
        if(s.size() == 2)
            return 1;
        string r = s;
        reverse(r.begin(), r.end());
        
        int n = s.size();
        int dp[n+1][n+1];
        
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s[i-1] == r[j-1])
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return n - dp[n][n];
    } 
};


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
} 