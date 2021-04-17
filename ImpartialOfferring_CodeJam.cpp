//code jam women i/o 
//Impartial Offerrings
//Solved 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int c=0; c<t; c++)
    {
        int n;
        cin>>n;
        map<int, int> m;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(m.find(x) == m.end())
            {
                m.insert({x, 1});
            }
            else
            {
                m[x]++;
            }
        }
        int ans = 0, i = 1;
        auto itr = m.begin();
        while(itr != m.end())
        {
            ans += i*itr->second;
            itr++;
            i++;
        }
        cout<<"Case #"<<c+1<<": "<<ans<<endl;
    }
    return 0;
}
