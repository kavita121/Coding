#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int left = 0, right = 0;
        if(a == 0)
            left++;
        else
            right++;
        
        if(b == 0)
            left++;
        else
            right++;

        if(c == 0)
            left++;
        else
            right++;

        if(left >= 1 && right >= 1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}