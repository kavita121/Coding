//platform: Codechef- Lunchtime
//question: Red Alert 
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
    
    int t, i;
    cin>>t;

    while(t--)
    {
        int n, d, h;
        cin>>n>>d>>h;

        vi rain(n);

        loop(i, 0, n)
        {
            cin>>rain[i];
        }

        bool redAlert = false;

        int level = 0;

        loop(i, 0, n)
        {
            if(rain[i] > 0)
                level += rain[i];
            else if(rain[i] == 0)
            {
                level -= d;
                if(level < 0)
                    level = 0;
            }
            
            if(level > h)
            {
                redAlert = true;
                break;
            }

        }

        if(redAlert)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    
    return 0;
}