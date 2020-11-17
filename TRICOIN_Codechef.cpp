//Coins And Triangle Problem Code: TRICOIN 
//CODEFORCES

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int height = 0;
        i = 1;
        while( ((i+1)*i/2) <= n)
        {
            i++;
            height++;
        }
        cout<<height<<endl;
    }
    return 0;
}