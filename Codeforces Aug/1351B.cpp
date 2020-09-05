#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, d, i;
    cin>>t;
    for( i=0; i<t; i++)
    {
        cin>>a>>b;
        cin>>c>>d;
        int area_sum, square_area;
        area_sum = a*b + c*d;
        int max1, max2;
        max1 = max(a,b);
        max2 = max(c,d);
        square_area = max1*max1;
        if(a==b || c==d)
        {
            cout<<"No"<<endl;
        }
        else if (max1 == max2)
        {
            if( area_sum == square_area)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
