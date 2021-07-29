//Chef In Infinite Plane
//Codechek
//July cookoff 
//ACCEPTED( after tutorial )

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, int> point;
        int temp;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            if(point.find(temp) == point.end())
            {
                point.insert({temp, 1});
            }
            else
            {
                point[temp]++;
            }
        }
        int ans = 0;
        for(auto itr = point.begin(); itr != point.end(); itr++)
        {
            ans += min(itr->first-1, itr->second);
        }

        cout<<ans<<endl;

    }
    return 0;
}