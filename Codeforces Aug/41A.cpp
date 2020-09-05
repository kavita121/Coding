//41 A Translation

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int i, j;
    cin>>s>>t;
    if( s.size() == t.size() )
    {
        for( i=0, j=s.size()-1; i<=j; i++, j-- )
        {
            swap(s[i], s[j]);
        }
        if(s==t)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
