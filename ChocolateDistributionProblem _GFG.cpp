//Chocolate Distribution Problem 
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>m;
        sort(arr.begin(), arr.end());
        int res = (int)INFINITY;
        for(int i=0; i<=n-m; i++)
        {
            res = min(res, (arr[i+m-1]-arr[i]));
        }
        cout<<res<<endl;
    }
	return 0;
}