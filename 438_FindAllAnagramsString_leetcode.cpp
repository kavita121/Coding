// 438. Find All Anagrams in a String
// Leetcode

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr1(26, 0), arr2(26, 0);
        
        if(s.size() < p.size())
            return {};
        
        int i = 0, j = 0;
        for(; i<p.size(); i++)
        {
            arr2[s[i] - 'a']++;
            arr1[p[i] - 'a']++;
        }
        
        vector<int> ans;
        
        if(arr1 == arr2)
            ans.push_back(j);
        
        for(; i<s.size(); i++)
        {   
            arr2[s[i] - 'a']++;            
            arr2[s[j] - 'a']--;
            j++;
            
            if(arr1 == arr2)
                ans.push_back(j);
        }
        
        return ans;
    }
};