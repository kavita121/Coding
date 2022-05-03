// 189. Rotate Array
// Leetcode

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums);
        
        int v = -1;
        k %= nums.size();
        int i = nums.size()-k;
        
        for(; i < nums.size(); i++)
        {
            nums[++v] = arr[i];
        }

        for(i=0; i<(nums.size()-k); i++)
        {
            nums[++v] = arr[i];
        }
    }
};