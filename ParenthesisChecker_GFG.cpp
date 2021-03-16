//Parenthesis Checker
//GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    // Function to return if the paranthesis are balanced or not
    bool ispar(string x)
    {
        stack<char> st;
        bool flag = true;
        for(char ch: x)
        {
            if(ch == '{' || ch == '[' || ch == '(')
            {
                st.push(ch);
            }
            else if(ch == '}')
            {
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else if(st.top() == '{')
                    st.pop();
                else
                {
                    flag = false;
                    break;
                }
            }
            else if(ch == ']')
            {
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else if(st.top() == '[')
                    st.pop();
                else
                {
                    flag = false;
                    break;
                }
            }
            else if(ch == ')')
            {
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else if(st.top() == '(')
                    st.pop();
                else
                {
                    //for cases as: ({)})
                    flag = false;
                    break;
                }
            }
        }
        if(st.empty() && flag)
            return true;
        else
            return false;
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  