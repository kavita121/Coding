//Next Smaller Element
//GFG 333. Stacks and Queues
//working correctly

#include<bits/stdc++.h>

using namespace std;

vector<int> nextSmallerElement(int n, vector<int> arr)
{
    vector<int> ans(n);

    map<int, int, greater<int> > m;

    for(int i=0; i<n; i++)
        m.insert({arr[i], i});

    auto itr = m.begin();

    for(int i=0; i<n; i++)
    {
        int min = -1, pos = i;
        itr = m.find(arr[i]);
        itr++;
        while(itr != m.end())
        {
            if(itr->second > i && pos == i)
            {
                pos = itr->second;
                min = itr->first;
            }
            else if(itr->second > i && pos > itr->second)
            {
                pos = itr->second;
                min = itr->first;
            }

            itr++;
        }

        ans[i] = min;
    }

    return ans;
}


int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    vector<int> ans = nextSmallerElement(n, arr);


    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
    
    return 0;
}