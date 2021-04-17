//Divide two integers without using multiplication, division and mod operator
//correct
//Done using addition


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int ans;
    int f = 0;
    if((a<0 && b>=0) || (a>=0 && b<0))
        f = 1;
    a = abs(a);
    b = abs(b);
    int count = 1, sum = b;
    while(sum < a)
    {
        sum += b;
        if(sum <= a)
            count++;
    }
    if(f)
        count = -count;
    cout<<count;
    return 0;
}