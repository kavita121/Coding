//199 A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i, j, a, b, c;
    cin>>n;
    long long x = 0, y = 1, z = 1, pos = 1;
    vector<long long> fibo;
    fibo.push_back(0);
    fibo.push_back(1);
    while( z<n )
    {
        pos++;
        z=x+y;
        fibo.push_back(z);
        x=y;
        y=z;
    }
    if( n==0 )
    {
        a=b=c=0;
    }
    else if( n==1 )
    {
        b=a=0;
        c=1;
    }
    else if( n==2 )
    {
        a=0;
        b=c=1;
    }
    else
    {
        a = fibo[pos-4];
        b = fibo[pos-3];
        c = fibo[pos-1];
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
