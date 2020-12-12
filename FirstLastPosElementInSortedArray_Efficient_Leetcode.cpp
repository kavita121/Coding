//34. Find First and Last Position of Element in Sorted Array
//Leetcode  ACCEPTED

class Solution {
public:
    
    int binarySearch(vector<int> nums, int target)
    {
        int low = 0, high = nums.size()-1, mid, pos = -1;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                //to check for the smallest index of the given number
                pos = mid;
                high = mid-1;
            }
            else if(nums[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return pos;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans{-1, -1};
        int start = binarySearch(nums, target);
        if(start != -1)
        {
            ans[0] = ans[1] = start;
            int i=start;
            while( i < nums.size() && nums[i] == target)
                ans[1] = i++;
        }
        return ans;
    }
};