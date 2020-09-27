//230A Dragons
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, s, i, j;
    cin>>s>>n;
    multimap<int, int> xy;
    multimap<int,int>::iterator it;
    for( i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        xy.insert({x, y});
    }
    auto itr = xy.begin();
    int kirito=s;
    int iter = xy.size();
    for( i=0; i<iter; i++ )
    {
        itr = xy.begin();
        int times = xy.size();
        for( j=1; j<=times; j++ )
        {
            if( itr->first < kirito )
            {
                kirito += itr->second;
                it = itr;
                itr++;
                xy.erase(it);
            }
            else
                itr++;
        }
    }
    if(xy.size() == 0)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}
