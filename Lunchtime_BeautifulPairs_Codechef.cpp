//platform: Codechef Lunchtime
//question: Beautiful Pairs
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
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        vll arr(n);
        ll i, j;
        map<ll, ll> m;

        loop(i, 0, n)
        {
            cin>>arr[i];
            if(m.find(arr[i]) == m.end())
                m.insert(mp(arr[i], 1));
            else
                m[arr[i]]++;
        }

        ll pair = 0;
        ll curr = n;
        for(auto itr = m.begin(); itr!= m.end(); itr++)
        {
            curr -= itr->ss;
            pair += curr * itr->ss * 2;
        }

        cout<<pair<<nl;
    }
    
    return 0;
}