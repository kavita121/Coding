//Wierd Algorith CSES

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n>1)
    {
        if(n%2 == 0)    //even
        {
            n /= 2;
            cout<<n<<" ";
        }
        else
        {
            n *= 3;
            n++;
            cout<<n<<" ";
        }
    }
    return 0;
}
