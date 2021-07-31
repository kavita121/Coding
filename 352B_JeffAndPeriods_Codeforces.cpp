//352B. Jeff and Periods
//Codeforces
//ACCEPTED

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp;

    multimap<int, int> m;

    int count = 0;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        if(m.find(temp) == m.end())
            count++;
        m.insert({temp, i});
    }

    
    int p = 0, x;
    bool f = false;
    auto itr = m.begin();

    vector< pair<int, int>> ans;

    for( itr = m.begin(); itr != m.end(); itr++)
    {

        x = itr->first;
        int prev = itr->second;
        p = 0;
        int flag = 1;

        itr++;
        if(itr == m.end())
        {
            f = true;
            break;
        }
        while(itr != m.end() && x == itr->first)
        {
            if(p == 0)
                p = itr->second - prev;
            else if(p != itr->second - prev)
            {
                flag = 0;
                count--;
                while(itr != m.end() && x == itr->first)
                {
                    itr++;
                }
                break;
            }

            prev = itr->second;
            itr++;
        }
        if(flag)
            ans.push_back({make_pair(x, p)});
        itr--;
    }
    if(f)
        ans.push_back({make_pair(x, p)});

    //printing answer
    cout<<count<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}