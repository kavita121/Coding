// Evaluation of Postfix Expression
//GFG ACCEPTED

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    // The main function that returns value of a given postfix expression
    int evaluatePostfix(string str)
    {
        stack<int> exp;
        int ans = 0;
        
        
        for(int i=0; i<str.size(); i++)
        {
            char ch = str[i];
            if(isdigit(ch))
            {
                int num = (int) ch - '0';
                exp.push(num);
            }
            else
            {
                int f, s;
                s = exp.top();
                exp.pop();
                f = exp.top();
                exp.pop();
                switch(ch)
                {
                    case '*': exp.push(f*s);
                              break;
                    case '/': exp.push(f/s);
                              break;
                    case '+': exp.push(f+s);
                              break;
                    case '-': exp.push(f-s);
                              break;
                }
            }
        }
        
        return exp.top();
    }
};


int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}