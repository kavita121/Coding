//149A Business Trip

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, i, min=0;
    cin>>k;
    vector<int> height(12);
    for( i=0; i<12; i++)
    {
        cin>>height[i];
    }
    sort(height.rbegin(), height.rend());
    i=0;
    int height_sum=0;
    while( i<12 )
    {
        if(height_sum >= k)
        {
            break;
        }
        height_sum+=height[i];
        min++;
        i++;
    }
    if(height_sum >= k)
        cout<<min;
    else
        cout<<-1;
    return 0;
}
