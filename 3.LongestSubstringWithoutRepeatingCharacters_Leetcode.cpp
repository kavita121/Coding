//Longest Substring Without Repeating Characters
//Using Kadane's Algorithm

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string substring="";
        substring += s[0];
        int maxSoFar, maxEndingHere, left=0;
        //for the strings having only 1 or 0 characters
        if(s.size() >= 1)
        {
            maxSoFar = 1;
            maxEndingHere = 1;
        }
        else
        {
            maxSoFar = 0;
            maxEndingHere = 0;
        }
        for(int i=1; i<s.size(); i++)
        {
            char ch = s[i];
            size_t found = substring.find(ch);
            //if the character is not found in the substring then add it and increase the size 
            if(found == string::npos)
            {
                substring += ch;
                maxEndingHere++;
            }
            else
            {
                //if the size of substring is larger than the largest substring so far
                if(maxEndingHere > maxSoFar)
                    maxSoFar = maxEndingHere;
                //resetting values to initial values
                maxEndingHere = 1;
                substring = "";
                //putting i value to left+1 for test case as: "dvdf" in which we might need to back to previous characters
                //so we are maintaining a left pointer which holds the value of the starting character of the current substring and 
                //we move to character next to it when we reset values
                i = left+1;
                substring += s[i];
                left = i;
            }
        }
        //if the largest substring is till the last character then check in the end 
        if(maxEndingHere > maxSoFar)
                maxSoFar = maxEndingHere;
        return maxSoFar;
    }
};