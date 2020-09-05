//1325 B CopyCopyCopyCopyCopy

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i, j;
    cin>>t;
    for( i=0; i<t; i++ )
    {
        cin>>n;
        set<int> num;
        vector<int> arr(n);
        for( j=0; j<n; j++ )
        {
            cin>>arr[j];
            num.insert(arr[j]);
        }
        cout<<num.size()<<endl;
    }
    return 0;
}