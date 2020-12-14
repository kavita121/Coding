//Greedy Florist
//Hackerrank ACCEPTED

#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int k, vector<int> c) 
{
    int sum = 0, round = 0;
    sort(c.rbegin(), c.rend());
    for(int i=0; i<c.size();)
    {
        for(int j=0; j<k && i<c.size(); j++, i++)
        {
            sum += (1+round) * c[i];
        }
        round++;
    }
    return sum;
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> c(n);
    for(int i=0; i<n; i++)
        cin>>c[i];
    cout<<getMinimumCost(k, c); 
}
