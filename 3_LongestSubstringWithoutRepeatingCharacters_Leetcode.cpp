// 3. Longest Substring Without Repeating Characters
// Leetcode

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s.length() == 0)
            return 0;
        
        int ans = 1;
        
        vector<int> arr(256, 0);
        int count = 1, ind = 0;
        arr[(int)s[0]]++;
        
        for(int i = 1; i<s.size(); )
        {
            if(arr[(int)s[i]] == 0)
            {
                arr[(int)s[i]]++;
                count++;
                i++;
            }
            else
            {
                arr[(int)s[ind]]--;
                ind++;
                count--;
                count = max(count, 0);
            }
            ans = max(ans, count);
        }
        
        return ans;
    }
};