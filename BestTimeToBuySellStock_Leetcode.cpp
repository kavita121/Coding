//121. Best Time to Buy and Sell Stock
//LEETCODE ACCEPTED

class Solution 
{
    public:
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0, min_val = 1e9;
        int i=0; 
        for(; i<prices.size(); i++)
        {
            min_val = min(min_val, prices[i]);
            ans = max(ans, prices[i]-min_val);
        }
        return ans;
    }
};