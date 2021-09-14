//platform: Codechef Spetember Long Challenge
//question: Travel Pass
    
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
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;
        int ans = 0;

        for(char x: s)
        {
            if(x == '0')
                ans += a;
            else
                ans += b;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}