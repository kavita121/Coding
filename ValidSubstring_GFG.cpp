//Valid Substring 
//GFG ACCEPTED
//Stack And Queue
//time = space = O(n)

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findMaxLen(string str) 
    {
        stack<int> s;
        s.push(-1);
        int ans = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '(')
            {
                s.push(i);
            }
            else
            {
                if(!s.empty())
                {
                    s.pop();
                }
                if(!s.empty())
                {
                    ans = max(ans, i - s.top());
                }
                else
                {
                    s.push(i);
                }
            }
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