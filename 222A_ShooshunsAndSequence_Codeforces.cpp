//platform: Codeforces
//question: 222 A. Shooshuns and Sequence
//ACCEPTED (Took help from tutorial)
    
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
    int i;
    long n, k;
    cin>>n>>k;
    vector<int> arr(n);
    k--;

    loop(i, 0, n)
        cin>>arr[i];
        
    int pos = -1;
    bool f = true;
    loop(i, 0, n)
    {
        if(arr[i] != arr[k])
        {
            pos = i;
        }
    }
    
    if(pos > k)
        cout<<-1;
    else    
        cout<<pos+1;

    return 0;
}