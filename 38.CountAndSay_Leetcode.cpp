//38. Count and Say
//Leetcode ACCEPTED

class Solution {
public:
    string countAndSay(int n) 
    {
        string res = "1";
        if(n == 1)
            return res;
        
        for(int i=2; i<=n; i++)
        {
            string temp = "";
            int count = 0;
            char prev = res[0];
            bool put = false;
            for(int j=0; j<res.size(); j++)
            {
                if(prev == res[j])
                {
                    count++;
                }
                else
                {
                    temp += to_string(count) + prev;
                    prev = res[j];
                    count =
                        1;
                }
            }
            temp += to_string(count) + prev;
            
            res = temp;
        }
        return res;
    }
};
