//Split the binary string into substrings with equal number of 0s and 1s
//GFG
//CORRECT

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int zero = 0, one = 0, ans = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '0')
        {
            zero++;
        }
        else if(str[i] == '1')
        {
            one++;
        }
        if(one == zero)
        {
            ans++;
            one = zero = 0;
        }
    }
    if(one == zero)
    {
        cout<<ans;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}