// 567. Permutation in String
// Leetcode

class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size() > s2.size())
            return false;
        
        vector<int> arr1(26, 0), arr2(26, 0);
        
        for(char ch: s1)
        {
            arr1[ch-'a']++;
        }
        
        int i = 0, j = 0;
        for(; i<s1.size(); i++)
            arr2[s2[i]-'a']++;
        
        if(arr1 == arr2)
                return true;
        
        for(; i < s2.size(); i++)
        {   
            arr2[s2[j]-'a']--;
            arr2[s2[i]-'a']++;
            
            if(arr1 == arr2)
                return true;
            j++;
        }
        
        
        return false;
    }
};