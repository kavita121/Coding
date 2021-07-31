//platform: Codeforces
//question: 433A. Kitahara Haruki's Gift
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
    
    int n;
    cin>>n;

    vi gift(n);

    int sum = 0;
    int count_200 = 0, count_100 = 0;

    int i;
    loop(i, 0, n)
    {
        cin>>gift[i];
        if(gift[i] == 100)
            count_100++;
        else
            count_200++;
        sum += gift[i];
    }

    sum /= 100;

    if( !(count_200 % 2) && (count_100 % 2) )
        cout<<"NO";
    else if( (count_200 % 2) && count_100 == 0 )
        cout<<"NO";
    else if(sum % 2 == 0 && n > 1)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}