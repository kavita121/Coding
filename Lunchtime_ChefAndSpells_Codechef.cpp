//platform: Codechef- Lunchtime
//question: Chef and Spells
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
        ll a, b, c;
        cin>>a>>b>>c;

        ll maxhit = 0;
        ll minm = min( min(a, b), c);

        maxhit = a+b+c;
        maxhit -= minm;

        cout<<maxhit<<nl;
    }
    
    return 0;
}
