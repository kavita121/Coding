//755A PolandBall and Hypothesis
//Accepted

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    bool sieve[n+1];
    memset(sieve, true, n+1);
    for(int i=2; i*i<=n; i++)
    {
        if(sieve[i] == true)
        {
            for(int j=i*2; j<=n; j+=i)
                sieve[j] = false;
        }
    }
    return sieve[n];
}

int main()
{
    int n, m;
    cin>>n;
    for(int i=1; ; i++)
    {
        if( !isPrime((n*i)+1) )
        {
            cout<<i;
            break;
        }
    }
    return 0;
}