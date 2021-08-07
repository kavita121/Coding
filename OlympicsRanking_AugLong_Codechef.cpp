//platform: Codechef August Long Challenge
//question: Olympics Ranking
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
    int i, j;
    
    int t;
    cin>>t;

    while(t--)
    {
        int g1, g2, s1, s2, b1, b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        if((g1+s1+b1) > (g2+b2+s2)) 
            cout<<1;
        else
            cout<<2;
        cout<<nl;
    }
    
    return 0;
}