//132 A Bicycle Chain

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j;
    cin>>n;
    vector<int> a(n);
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for( i=0; i<m; i++)
    {
        cin>>b[i];
    }
    map<int, int> count;
    auto itr = count.begin();
    for( i=0; i<m; i++)
    {
        for( j=0; j<n; j++)
        {
            int r = b[i] %a[j];
            if( r == 0)
            {
                int quo = b[i]/a[j];
                itr = count.find(quo);
                if( itr != count.end() )
                {
                    itr->second +=1;
                }
                else
                {
                    count.insert({quo, 1});
                }
            }
        }
    }
    itr = count.begin();
    int max = 0, freq = 0;
    while( itr != count.end() )
    {
        if( itr->first > max )
        {
            max = itr->first;
            freq = itr->second;
        }
        itr++;
    }
    cout<<freq;
    return 0;
}
