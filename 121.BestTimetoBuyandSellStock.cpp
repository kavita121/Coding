//121. Best Time to Buy and Sell Stock 
//LEETCODE Accepted

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice = 999999, max=0;
        for(int i=0; i<prices.size(); i++)
        {
            if(minPrice > prices[i])
                minPrice = prices[i];
            if(max < prices[i]-minPrice)
                max = prices[i]-minPrice;
        }
        return max;
    }
};