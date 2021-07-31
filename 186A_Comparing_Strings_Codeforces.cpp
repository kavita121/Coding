//platform: Codeforces
//question: 186A. Comparing Strings
//ACCEPTED
    
#include<bits/stdc++.h>
#define sz(v) v.size()
#define loop(i,a,b) for(i=a; i<b; i++)
#define bloop(i,a,b) for(i=a; i>=b; i--)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define endl '\n'
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
    
    string f, s;
    cin>>f>>s;

    if(sz(f) != sz(s))
        cout<<"NO";
    else
    {
        multiset<char> a, b;
        for(char x: f)
        {
            a.insert(x);
        }
        
        for(char x: s)
        {
            b.insert(x);
        }

        if(a != b)
        {
            cout<<"NO";
        }
        else
        {
            int i;
            int count = 0;
            loop(i, 0, sz(f))
            {
                if(f[i] != s[i])
                    count++;
            }

            if(count <= 2)
                cout<<"YES";
            else
                cout<<"NO";
        }
    }
    
    return 0;
}