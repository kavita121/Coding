//Ebony and Ivory 633A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int g = __gcd(a, b);
    if( c % g == 0 )
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
