#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int maxEat = n-x;
        long long last;
        if(n >= 1)
            last = arr[0];
        long long ans = 1;
        for(int i=0; i<n && ans < maxEat; i++)
        {
            if(arr[i] != last)
            {
                ans++;
                last = arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}