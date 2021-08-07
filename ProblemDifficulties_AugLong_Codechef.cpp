//platform: Code forces August Long Challenge
//question: Problem Difficulties
//ACCEPTED
    
#include<bits/stdc++.h>
#define nl '\n'
#define mp make_pair
    
using namespace std;
    
    
int main()
{
    //fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;

    int t;
    cin>>t;

    while(t--)
    {
        int a1, a2, a3, a4;
        cin>>a1>>a2>>a3>>a4;

        map<int, int> m;
        m.insert(mp(a1, 1));

        if(m.find(a2) == m.end())
            m.insert(mp(a2, 1));
        else
            m[a2]++;
        
        if(m.find(a3) == m.end())
            m.insert(mp(a3, 1));
        else
            m[a3]++;
        
        if(m.find(a4) == m.end())
            m.insert(mp(a4, 1));
        else
            m[a4]++;

        if(m.size() == 1)
            cout<<0<<nl;
        else if(m.size() == 4 || m.size() == 3)
            cout<<2<<nl;
        else if(m.size() == 2)
        {
            auto itr = m.begin();
            if(itr -> second == 1 || itr -> second == 3)
                cout<<1<<nl;
            else
                cout<<2<<nl;
        }
    }
    
    return 0;
}