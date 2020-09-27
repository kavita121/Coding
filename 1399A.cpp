//Remove smallest

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        vector<int> arr(n);
        int f=0;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr.begin(), arr.end());
        int size=n;
        for( j=0; j<n-1; j++)
        {
            if( abs(arr[j] - arr[j+1] ) <= 1)
                size--;
        }
        if(size == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
