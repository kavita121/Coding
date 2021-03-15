//Longest Palindrome in a String 
//GFG ACCEPTED

#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int maxLen = 1;
        int n=str.size();
        string ans = " ";
        ans[0]=str[0];
        //for checking substrings
        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<=n-1; j++)
            {
                int f = 1;
                //cheking if the current substring is a palindrome or not
                for(int s=j, e=j+i-1; s<=e; s++, e--)
                {
                    if(str[s] != str[e])
                    {
                        f = 0;
                        break;
                    }
                }
                if(f == 1)
                {
                    ans = str.substr(j, i);
                    maxLen = max(maxLen, i);
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
    }
	return 0;
}