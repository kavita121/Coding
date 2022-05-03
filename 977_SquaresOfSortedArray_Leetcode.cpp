// 977. Squares of a Sorted Array
// LeetCode

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int pos = -1;
        
        for(int i=0; i<nums.size(); i++)
        {
            pos = i;
            if(nums[i] > 0)
            {
                break;
            }
        }
        int j = pos;
        
        for(int i = pos-1; i>=0; i--)
        {
            while(j<nums.size() && abs(nums[i]) > nums[j])
            {
                ans.push_back(nums[j] * nums[j]);
                j++;
            }
            ans.push_back(nums[i] * nums[i]);
        }
        
        for(; j<nums.size(); j++)
            ans.push_back(nums[j] * nums[j]);
        
        return ans;
    }
};


// Solution 2 (better)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int low = 0, high = nums.size()-1;
        int p = high, leftSquare, rightSquare;
        
        while(low <= high)
        {
            leftSquare = nums[low] * nums[low];
            rightSquare = nums[high] * nums[high];
            
            ans[p--] = max(leftSquare, rightSquare);
            
            if(abs(nums[low]) > nums[high])
                low++;
            else
                high--;
        }
        
        return ans;
    }
};