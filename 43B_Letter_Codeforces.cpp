//platform: Codeforces
//question: 43 B. Letter
//ACCCEPTED
    
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
    
    string input, search;

    getline(cin, input);
    getline(cin, search);

    map<char, int> m;

    for(char x: input)
    {
        if(m.find(x) == m.end())
            m.insert(mp(x, 1));
        else
            m[x]++;
    }

    bool flag = true;
    for(char x: search)
    {
        if( m.find(x) == m.end() && x != ' ')
        {
            flag = false;
            break;
        }
        else
        {
            if(m[x] <= 0 && x != ' ')
            {
                flag = false;
                break;;
            }
            else
                m[x]--;
        }
    }

    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}