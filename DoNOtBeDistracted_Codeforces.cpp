#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string task;
        cin>>task;
        unordered_map<char, int> m;

        int f = 1;

        for(int i=0; i<task.size(); i++)
        {
            if( m.find(task[i]) == m.end() )
            {
                m.insert({task[i], i});
            }
            else
            {
                if(m[task[i]] != i-1)
                {
                    f = 0;
                    break;
                }
                else
                {
                    m[task[i]] = i;
                }
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}