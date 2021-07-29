//337 A. Puzzle
//Codeforces
//ACCEPTED


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> piece(m);

    for(int i=0; i<m; i++)
        cin>>piece[i];

    sort(piece.begin(), piece.end());

    int ans = 1e7;

    for(int i=0; i <= (m-n); i++)
    {
        ans = min (ans, piece[i+n-1] - piece[i]);
    }

    cout<<ans;
    return 0;
}