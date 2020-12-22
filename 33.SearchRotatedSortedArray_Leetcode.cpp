//33. Search in Rotated Sorted Array
//LeetCode ACCEPTED

class Solution {
public:
    
    int binarySearch(vector<int> arr, int low , int high, int target)
    {
        while(low <= high)
        {
            int mid = (low+high) / 2;
            
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] <  target)
                low = mid+1;
            else
                high = mid-1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) 
    {
        int low , high, mid, breakPoint = -1;
        int i=0;
        while(i < nums.size()-1 && nums[i] < nums[i+1] )
        {
            i++;
        }
        if( i < nums.size()-1)
        {
            int s = binarySearch(nums, 0, i, target);
            if( s != -1)
                return s;
            else
                return binarySearch(nums, i+1, nums.size()-1, target);
        }
        else
        {
            return binarySearch(nums, 0, nums.size()-1, target);
        }
    }
};