//939A Love Triangle Codeforces
//Accepted

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin>>n;
    vector<int> plane(n);
    for(i=0; i<n; i++)
        cin>>plane[i];
    bool f=false;
    for(i=0; i<n; i++)
    {
        int a, b, c;
        a = plane[i]-1;
        b = plane[a]-1;
        c = plane[b]-1;
        if( i == c  )
        {
            f = true;
            break;
        }
    }
    if( f )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}