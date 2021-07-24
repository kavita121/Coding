//Next Smaller Element
//GFG CORRECT   333. Stacks and Queues
//using Stack
//time ans space complexity: O(n)


#include<bits/stdc++.h>

using namespace std;

vector<int> nextSmallerElement(int n, vector<int> arr)
{
    vector<int> ans(n);

    stack<int> s;


    s.push(0);
        
    for(int i=1; i<n; i++)
    {
        if(!s.empty() && arr[i] > arr[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && arr[i] < arr[s.top()])                
            {
                int ind = s.top();
                ans[ind] = arr[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
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