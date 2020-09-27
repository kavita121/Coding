//TDPRIMES Spoj
//accepted

#include<bits/stdc++.h>
#define ll long long
#define num 1e8

using namespace std;

void sieve(vector<bool> & primes)
{
    ll n = primes.size();
    if(primes.size()>=2)
        primes[1] = primes[0] = false;
    for(ll i=2; i*i<=n; i++)
    {
        if(primes[i])
        {
            for(ll j=i*i; j<n; j+=i)
                primes[j]=false;
        }
    }
}

int main()
{
    vector<bool> primes(num+1, true);
    vector<ll> sol;
    sieve(primes);
    ll count=0, print=1;
    for(ll i=2; i<=num; i++)
    {
        if(primes[i])
        {
            sol.push_back(i);
        }
    }
    for(ll i=0; i<sol.size(); i+=100)
        cout<<sol[i]<< "\n";
    return 0;
}