#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int f = 0;
        int good = 0, bad = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
                bad++;
            else    
                good++;
            if(bad == good)
            {
                f = 1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else if(good >= bad)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}