//214 A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b, pair=0;
    cin>>n>>m;
    int sum=n+m;
    for( a=0; a<sum; a++ )
    {
        for( b=0; b<sum; b++ )
        {
            int x, y;
            x=a*a + b;
            y=a+b*b;
            if( x == n && y==m )
                pair++;
        }
    }
    cout<<pair;
    return 0;
}
