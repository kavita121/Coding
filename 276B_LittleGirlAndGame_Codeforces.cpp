//platform: Codeforces
//question: 276B Little Girl and Game
//ACCEPTED
    
#include<bits/stdc++.h>
#define sz(v) v.size()
#define fl(i,a,b) for(i=a; i<b; i++)
#define bl(i,a,b) for(i=a; i>=b; i--)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define endl '\n'
#define ff first
#define ss second
#define mp make_pair
    
using namespace std;
    
typedef long long ll ;
typedef vector<int> vi;
typedef pair<int, int> pii;
    
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const int inf = 1e9;
    
int main()
{
    //fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin>>str;

    map<char, int> m;

    for(char x: str)
    {
        if(m.find(x) == m.end())
            m.insert({x, 1});
        else
            m[x]++;
    }

    int curr = 1; //1 = First  2 = Second

    while(1)
    {
        auto itr = m.begin();
        int odd = 0, even = 0, minm = inf, minEle = inf;

        for( ; itr != m.end(); itr++)
        {
            if(itr->ss % 2 == 0)
                even++;
            else
            {
                if(minm > itr->ss)
                {
                    minm = itr->ss;
                    minEle = itr -> ff;
                }
                odd++;
            }
        }

        if(odd <= 1)
        {
            break;
        }
        else
        {
            m[minEle]--;
            if(m[minEle] == 0)
                m.erase(m[minEle]);
        }

        if(curr == 1)
            curr = 2;
        else
            curr = 1;
    }

    if(curr == 1)
        cout<<"First";
    else
        cout<<"Second";
    return 0;
}