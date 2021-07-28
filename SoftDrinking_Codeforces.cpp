//Soft Drinking
//ACCEPTED
//Codeforces 151A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n, k, l, c, d, nl, np, p;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    long toast = 0;

    long drink = (k*l)/nl, salt = p/np, lime = c*d;

    toast = min ( min(drink, salt), lime ) / n;
    cout<<toast;

    return 0;
}