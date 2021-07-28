//139 A. Petr and Book
//Codeforces
//ACCEPTED

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int day = 0;
    vector<int> pages(7);

    for(int i=0; i<7; i++)
    {
        cin>>pages[i];
    }

    while(n > 0)
    {
        n -= pages[day];
        day = (day+1) % 7;
    }
    if(day == 0)
        day = 7;
    cout<<day;
    return 0;
}