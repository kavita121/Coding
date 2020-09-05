//219A k-String

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans = "";
    int k, i;
    cin>>k;
    cin>>s;
    map<char, int> letterCount;
    auto itr = letterCount.begin();
    for( i=0; i<s.size(); i++ )
    {
        if( itr.find(s[i]) != letterCount.end() )
        {
            itr->second = itr->second+1;
        }
        else
        {
            letterCount.insert({s[i], 1});
        }
        itr++;
    }
    itr = letterCount.begin();
    int f=1;
    while( itr != letterCount.end() )
    {
        if(itr->second % k !=0 )
        {
            f=0;
            break;
        }
        itr++;
    }
    if( f == 0 )
        cout<<-1;
    else
    {
        itr = letterCount.begin();
        while( itr != letterCount.end() )
        {
            while( itr->second != 0 )
            {
                ans += itr->first;
            }
            itr++;
        }
    }
    while(k)
    {
        cout<<ans;
        k--;
    }
    return 0;
}
