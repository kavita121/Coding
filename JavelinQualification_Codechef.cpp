//platform: Codechef
//question: Javelin Qualification
//ACCEPTED
    
#include<bits/stdc++.h>
#define sz(v) v.size()
#define loop(i,a,b) for(i=a; i<b; i++)
#define bloop(i,a,b) for(i=a; i>=b; i--)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define nl '\n'
#define ff first
#define ss second
#define mp make_pair
#define test_loop int t; cin>>t; while(t--)
    
using namespace std;
    
typedef long long ll ;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
    
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const ll inf = 1e9;
    
int main()
{
    //fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    
    test_loop
    {
        int n, m, x;
        cin>>n>>m>>x;
        map<int, int, greater<int>> arr;

        loop(i, 0, n)
        {
            cin>>j;
            arr.insert(mp(j, i+1));
        }

        set<int> player;

        auto itr = arr.begin();
        for(; itr != arr.end(); itr++, i++)
        {
            if(itr->first >= m)
            {
                x--;
                player.insert(itr->second);
            }
        }
        

        if(x > 0)
        {
            itr = arr.begin();
            while(x > 0 && itr != arr.end())
            {
                if(player.find(itr->second) == player.end())
                {
                    x--;
                    player.insert(itr->second);
                }
                itr++;
            }
        }
        cout<<player.size()<<" ";
        for(auto it = player.begin(); it != player.end(); it++)
        {
            cout<<*it<<" ";
        }

        cout<<nl;

    }
    
    return 0;
}