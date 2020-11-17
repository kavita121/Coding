//Fit Squares in Triangle Problem Code: TRISQ
//CodeChef
//Accepted but the wrong approach

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int squares = 0;
        int num = 4, i=1;
        if(n<4)
            squares = 0;
        else
        {
            while(num <= n)
            {
                num+=2; 
                squares = i*(i+1)/2;
                i++;
            }
        }
        
        cout<<squares<<endl;
    }
    return 0;
}