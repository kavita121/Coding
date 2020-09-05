//34B Sale

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j;
    cin>>n>>m;
    vector<int> cost(n);
    for( i=0; i<n; i++)
    {
        cin>>cost[i];
    }
    int total = 0;
    sort( cost.begin(), cost.end() );
    i=0;
    while(m>0)
    {
        if(cost[i]<0)
            total += abs(cost[i++]);
        m--;
    }
    cout<<total;
    return 0;
}
