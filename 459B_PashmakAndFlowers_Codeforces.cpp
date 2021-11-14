//platform: Codeforces
//question: 459 B. Pashmak and Flowers
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
    long n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    //we have to find all the possible combinations and then find out the one with maximum differnece
    long long max = INT_MIN, max_count = 0, minm = INT_MAX, min_count = 0;
    for(long i=0; i<n; i++)
    {
        if(max == arr[i])
            max_count++;
        if(arr[i] == minm)
            min_count++;
        if(arr[i] > max)
        {
            max = arr[i];
            max_count = 1;
        }
        if(arr[i] < minm)
        {
            minm = arr[i];
            min_count = 1;
        }
    }

    ll count = (max == minm) ? ( max_count * (max_count - 1) )/ 2 : (max_count * min_count); 
    cout << (max - minm) << " " << count;
    return 0;
}