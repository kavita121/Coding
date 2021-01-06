//151. Reverse Words in a String
//in-place algo
//Leetcode ACCEPTED

class Solution {
public:
    
    string reverseWords(string s) 
    {
        
        int j = 0;
        int n = s.size();
         
        
        for(int i=0, j=n-1; i<j; i++, j--)
        {
            swap(s[i], s[j]);
        }
        
        //to remove the space before the first word in the sentence
        
        j=0;
        
        while( j < n && s[j] == ' ')
        {
            s.erase(s.begin()+j);
        }
        
        //the sky is blue
        //lueb si yks eht
        
        
        for(int i=0; i<s.size(); i++)
        {   
            
            int t = i;
            while(i<s.size() && s[i] != ' ')
            {
                i++;
            }
            int l =  i-1;

            //to reverse the words
            for( ; t<l; l--, t++)
            {
                swap(s[l], s[t]);
            }
            
            //to deal with extra spaces in between words
            while(i < s.size()-2 && s[i] == ' ' && s[i+1] == ' ')
                s.erase(s.begin()+i);
        }
        
        
        //to remove the spaces after the last word in the sentence
        
        j=s.size()-1;
        while( j >= 0 && s[j] == ' ')
        {
            s.erase(s.begin()+j);
            j--;
        }

        
        return s;
    }
};