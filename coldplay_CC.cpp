#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b;
        int anu=0, sarth=0;
        cin>>n>>a>>b;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
                sarth += a;
            else
                anu += b;
        }
        if(anu == sarth)
            cout<<"DRAW"<<endl;
        else if(anu > sarth)
            cout<<"ANURADHA"<<endl;
        else    
            cout<<"SARTHAK\n";
    }
    return 0;
}