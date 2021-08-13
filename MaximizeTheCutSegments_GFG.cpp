//Maximize The Cut Segments
//DP
//GFG ACCEPTED


#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    //Solved using unbounded knapsack problem and coin change problem
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> val{x, y, z};
        
        int dp[4][n+1];
        
        for(int i=0; i<4; i++)
            dp[i][0] = 0;
        
        for(int i=0; i<=n; i++)
            dp[0][i] = INT_MIN+1;
            
        for(int i=1; i<4; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(j >= val[i-1])
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-val[i-1]]+1);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        if(dp[3][n] < 0)
            return 0;
        else
            return dp[3][n];
    }
};



int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}