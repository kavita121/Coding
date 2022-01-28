// count number of digits in a number
#include<bits/stdc++.h>
    
using namespace std;
    
int main()
{
    int n, m;
    cin>>n;
    m = n;
    int count = 0;

    while( n > 0 )
    {
        count++;
        n /= 10;;
        cout<<"n: "<<n<<endl;
    }

    cout<<"No. of digits in "<<m<<" is: "<<count;
    return 0;
}