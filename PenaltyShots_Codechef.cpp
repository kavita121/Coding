//platform: Codechef
//question: Penalty Shot
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
        vector<int> arr(10);
        for(int i=0; i<10; i++)
            cin>>arr[i];

        int curr = 1;

        int first=0, sec = 0;
        for(int i=0; i<10; i++)
        {
            if(i%2 == 0)
            {
                first += arr[i];
            }
            else
            {
                sec += arr[i];
            }
        }

        if(first == sec)
            cout<<0<<endl;
        else if(first > sec)
            cout<<1<<endl;
        else
            cout<<2<<nl;
    }
    
    return 0;
}