//Sort an array of 0s, 1s and 2s GFG
//Accepted

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        int x, zero=0, one=0, two=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                zero++;
            else if(x == 1)
                one++;
            else
                two++;
        }
        while(zero--)
            cout<<"0 ";
        while(one--)
            cout<<"1 ";
        while(two--)
            cout<<"2 ";
        cout<<endl;
    }
	return 0;
}