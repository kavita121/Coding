//Path with Maximum Gold - Dynamic Programming | Goldmine Problem
//correct Accepted

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int maximumGoldPath(vector<vector<int>> arr)
{
    int n = (int) arr.size();
    int m = (int) arr[0].size();
    int val[n][m]={0};
    for(int i=0; i<n; i++)
        val[i][m-1] = arr[i][m-1];
    for(int i=m-2; i>=0; i--)
    {
        for(int j=0; j<n; j++)
        {
            //if we are in the first row
            if( j == 0 )
            {
                int x = arr[j][i];
                int k = max(x+val[j][i+1], x+val[j+1][i+1]);
                val[j][i] = k;
            }
            //if we are in theA last row
            else if( j == n-1 )
            {
                int x = arr[j][i];
                int k = max(x+val[j][i+1], x+val[j-1][i+1]);
                val[j][i] = k;
            }
            //if we are in any row in the middle
            else
            {        
                int x = arr[j][i];
                int k = max(x+val[j][i+1], x+val[j+1][i+1]);
                k = max(k, x+val[j-1][i+1]);
                val[j][i] = k;     
            }
            
        }
    }
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        if(val[i][0] > mx)
            mx = val[i][0];
    }
    return mx;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector< vector<int>> arr(n, vector<int> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    }
    int res = maximumGoldPath(arr);
    cout<<res;
    return 0;
}