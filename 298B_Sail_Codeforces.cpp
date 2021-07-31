//platform: Codeforces
//question: 298B Sail
//ACCEPTED
    
#include<bits/stdc++.h>
#define sz(v) v.size()
#define floop(i,a,b) for(i=a; i<b; i++)
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
    ll sx, sy, ex, ey;

    cin>>t>>sx>>sy>>ex>>ey;

    string wind;
    cin>>wind;

    ll x = ex-sx, y = ey-sy;

    ll north = 0, south = 0, west = 0, east = 0;
    if(x > 0)
        east = abs(x);
    else
        west = abs(x);

    if(y > 0)
        north = abs(y);
    else
        south = abs(y);

    int i;

    ll ans = 0;
    
    floop(i, 0, sz(wind))
    {
        if(north <= 0 && south <= 0 && east <= 0 && west <= 0)
        {
            break;
        }

        ans++;
        switch(wind[i])
        {
            case 'N':
                north--;
                break;
            case 'S':
                south--;
                break;
            case 'E':
                east--;
                break;
            case 'W':
                west--;
                break;
        }
    }

    if(!(north <= 0 && south <= 0 && east <= 0 && west <= 0) )
        ans = -1;

    cout<<ans;
    return 0;
}