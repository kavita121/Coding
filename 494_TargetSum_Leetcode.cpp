//494. Target Sum
//Leetcode
//ACCEPTED

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int sum = 0, n = nums.size();
        for(int i=0; i<nums.size(); i++)
            sum += nums[i];
        
        int sumS1 = (sum + target) / 2;
        
        if((sum + target) % 2)
            return 0;
        
        int dp[n+1][sumS1+1];
        
        dp[0][0] = 1;
        
        for(int i=1; i<=sumS1; i++)
            dp[0][i] = 0;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=sumS1; j++)
            {
                if(j >= nums[i-1])
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][sumS1];
    }
};