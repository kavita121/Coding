// 557. Reverse Words in a String III
// Leetcode

class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i<s.size(); ++i)
        {
            int l = i;
            while(i<s.size() && s[i] != ' ')
                ++i;
            for(int m = l, n = i-1; m < n; ++m, --n)
            {
                swap(s[m], s[n]);
            }
        }
        
        return s;
    }
};