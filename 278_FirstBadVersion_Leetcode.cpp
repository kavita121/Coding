// Leetcode 278. First Bad Version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int bad = -1;
        long long mid, low = 1, high = n;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(!isBadVersion(mid))
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
                bad = mid;
            }
        }
        return bad;
    }
};