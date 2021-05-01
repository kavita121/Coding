//Print Value Of Rsb Mask

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num = (n & -n);
    string ans="";
    int i = 1;
    while(num > 0)
    {
        if(num%2 == 0)
            ans.push_back('0');
        else
            ans.push_back('1');
        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
    return 0;
}