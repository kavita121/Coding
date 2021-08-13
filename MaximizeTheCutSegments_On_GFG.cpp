// Maximize The Cut Segments
// GFG ACCEPTED
// O(n) solution 


#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> val{x, y, z};
        
        int dp[n+1];
        
        for(int i=0; i<=n; i++)
            dp[i] = -1;
        
        dp[0] = 0;
            
        for(int i=0; i<=n; i++)
        {
            
            if(dp[i] == -1)
                continue;
                
            if(x+i <= n)
            {
                dp[i+x] = max(dp[i+x], dp[i]+1);
            }
            if(y+i <= n)
            {
                dp[i+y] = max(dp[i+y], dp[i]+1);
            }
            if(z+i <= n)
            {
                dp[i+z] = max(dp[i+z], dp[i]+1);
            }
        }
        
        if(dp[n] == -1)
            return 0;
        else
            return dp[n];
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