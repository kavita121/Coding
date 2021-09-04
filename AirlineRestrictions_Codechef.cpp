//platform: Codechef
//question: Airline Restrictions
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
        int a, b, c, d ,e;
        cin>>a>>b>>c>>d>>e;
        
        if(( (a+b) <= d && c <= e) || ( (b+c) <= d && a <= e) || ( (a+c) <= d && b <= e ) )
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    
    return 0;
}