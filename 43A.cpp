//43 A Football

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    map< string, int > goals;
    auto itr = goals.begin();
    for( i=0; i<n; i++ )
    {
        string s;
        cin>>s;
        itr = goals.find(s);
        if( itr != goals.end() )
        {
            itr->second = itr->second+1;
        }
        else
        {
            goals.insert({ s, 1});
        }
    }
    itr = goals.begin();
    int max = 0;
    string ans="";
    while( itr != goals.end() )
    {
        if( (itr-> second) > max )
        {
            max = itr->second;
            ans = itr->first;
        }
        itr++;
    }
    cout<<ans;
    return 0;
}
