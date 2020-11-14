//287. Find the Duplicate Number LEETCODE
//ACCEPTED

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int fast = nums[0], slow = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(fast != slow);
        slow = nums[0];
        while(fast != slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};