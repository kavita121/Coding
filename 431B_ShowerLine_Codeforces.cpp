//platform: Codeforces
//question: 431B Shower line
    
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
    int i, j;

    vector< vector<int> > line(5, vector<int>(5));
    loop(i, 0, 5)
        loop(j, 0, 5)
            cin>>line[i][j];
    
    vector<int> arr(5);
    loop(i, 0, 5)
        arr[i] = i;
    
    int ans = -1;

    // we can find all the possible permutations for the 5 people in the queue and find out the max out of this
    do{

        int temp = 0;
        //01234
        temp += line[arr[0]][arr[1]] + line[arr[1]][arr[0]];
        temp += line[arr[2]][arr[3]] + line[arr[3]][arr[2]];
        //1234
        temp += line[arr[1]][arr[2]] + line[arr[2]][arr[1]];
        temp += line[arr[4]][arr[3]] + line[arr[3]][arr[4]];
        //234
        temp += line[arr[2]][arr[3]] + line[arr[3]][arr[2]];
        //34
        temp += line[arr[3]][arr[4]] + line[arr[4]][arr[3]];

        ans = max(ans, temp);

    }while(next_permutation(arr.begin(), arr.end()));

    cout<<ans;

    return 0;
}