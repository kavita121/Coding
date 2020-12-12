//34. Find First and Last Position of Element in Sorted Array
//Leetcode  ACCEPTED

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans{-1, -1};
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == target)
            {
                ans[0] = ans[1] = i;
                while( i < nums.size() && nums[i] == target )
                {
                    ans[1] = i;
                    i++;
                }
                break;
            }
        }
        return ans;
    }
};