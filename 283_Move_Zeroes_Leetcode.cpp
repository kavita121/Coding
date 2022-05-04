// 283. Move Zeroes
// Leetcode

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count = 0;
        
        int k = -1;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
                nums[++k] = nums[i];
            else 
                ++count;
        }
        
        for(int i=0; i<count; ++i)
        {
            nums[++k] = 0;
        }
    }
};

// optimal solution with least operations

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
        int k = -1;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
            {
                swap(nums[++k] , nums[i]);
            }
        }
        
    }
};