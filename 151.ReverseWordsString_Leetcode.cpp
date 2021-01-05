class Solution {
public:
    string reverseWords(string s) 
    {
        
        string res = "";
        
        int j = 0;
        int n = s.size();
        
        
        for(int i=n-1; i>=0; i--)
        {
            //to deal with extra space
            while( i >= 0 && s[i] == ' ' )
            {
                i--;
            }
            int t = i;
            while(i >= 0 && s[i] != ' ')
            {
                i--;
            }
            i++;
            
            int c = 0;
            for(; i<=t; i++)
            {
                res += s[i];
                c++;
            }
            
            i -= c;
            
             if(i>0)
                 res += ' ';
        }
        
        //to remove the extra spaces at end
        j=res.size() - 1;
        while( j >= 0 && res[j] == ' ')
        {
            res.erase(res.begin()+j);
            j--;
        }
        
        return res;
    }
};