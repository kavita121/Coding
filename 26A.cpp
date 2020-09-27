//Sieve of eratosthenes
 
#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void eratosthenes(vector<int> &prime)
{
    int i, j;
    for(i=2; i<=prime.size()/2; i++)
    {
        if(prime[i] == 0)
        {
            for(j=i; j<prime.size(); j+=i)
            {
                prime[j] += 1;
            }
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    n++;
    vector<int> prime(n,0);
    eratosthenes(prime);
    int c=0;
    for(int i=2; i<n; i++)
        if(prime[i] == 2)
        {
            c++;
        }
    cout<<c;
    return 0;
}