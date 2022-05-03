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


// Fastest

class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

    }
};


// Similar to 2nd but slower

class Solution {
public:
    void reverseArray(vector<int>& nums, int l, int h)
    {
        for(int i=l, j = h-1; i<j; i++, j--)
            swap(nums[i], nums[j]);
    }
    
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        
        reverseArray(nums, 0, nums.size());
        reverseArray(nums, 0, k);
        reverseArray(nums, k, nums.size());

    }
};