//339B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, i, j, time=0, diff=1;
    cin>>n>>m;
    vector<long long> arr(m);
    for( i=0;i<m;i++ )
    {
        cin>>arr[i];
        if(i>0)
        {
            diff = arr[i]-arr[i-1];
            if(diff<0)
            {
                diff += n; 
            }
        }
        else
        {
            diff = arr[i]-1;
        }
        time+=diff;
    }
    cout<<time;
    return 0;
}