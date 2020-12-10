//Ice Cream Parlor 
//Hackerrank  ACCEPTED

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t,i,m,n,k;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        multimap<long int, long int> cost;
        for(i=0; i<n; i++)
        {
            cin>>k;
            cost.insert({k, i});
        }
        auto itr = cost.begin();
        while(itr != cost.end())
        {
            int comp = m - itr->first;
            auto f = cost.find(comp);
            if( f != cost.end() && f->second != itr->second )
            {
                int d1 = itr->second+1, d2 = f->second+1;
                if(d1>d2)
                {
                    cout<<d2<<" "<<d1<<endl;
                }
                else
                {
                    cout<<d1<<" "<<d2<<endl;
                }
                break;
            }
            itr++;
        }
    }
    return 0;
}
