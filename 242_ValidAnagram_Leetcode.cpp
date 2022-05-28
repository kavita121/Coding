// 242. Valid Anagram
// Leetcode

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, int> s1;
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s1.find(s[i]) == s1.end())
            {
                count++;
                s1.insert({s[i], 1});
            }
            else
                s1[s[i]]++;
            
        }
        
        for(int i=0; i<t.size(); i++)
        {
            if(s1[t[i]] > 1)
            {
                s1[t[i]]--;
            }
            else if(s1[t[i]] == 1)
            {
                s1[t[i]]--;
                count--;
            }
            else
                return false;
        }
        if(count == 0)
            return true;
        
        return false;
        
    }
};


// Fastest solution

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        vector<int> arr(26, 0);
        
        for(int i=0; i<s.size(); i++)
        {
            arr[s[i]-'a']++;
        }
        
        for(int i=0; i<t.size(); ++i)
        {
            arr[t[i]-'a']--;
            
            if(arr[t[i]-'a'] < 0)
                return false;
        }
        
        
        return true;
        
    }
};