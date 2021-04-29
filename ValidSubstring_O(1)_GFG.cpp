//Valid Substring 
//GFG ACCEPTED
//Stack And Queue
//time: O(n)    space:O(1)


#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findMaxLen(string str) 
    {
        int ans = 0, open = 0,  close = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            char x = str[i];
            if(x == '(')
            {
                open++;
            }
            else if(x == ')')
            {
                close++;
            }
            
            if(open == close)
                ans = max(ans, close*2);
            else if(open < close)
                open = close = 0;
        }
        
        open = close = 0;
        for(int i=str.size()-1; i>=0; i--)
        {
            char x = str[i];
            if(x == '(')
            {
                open++;
            }
            else if(x == ')')
            {
                close++;
            }
            
            if(open == close)
                ans = max(ans, open*2);
            else if(open > close)
                open = close = 0;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends