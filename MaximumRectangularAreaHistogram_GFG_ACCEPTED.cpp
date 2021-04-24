//Maximum Rectangular Area in a Histogram 
//GFG ACCEPTED
//Stack and Queue

#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long> s;
        long long temp;
        long long maxArea = INT_MIN;
        
        int i;
        for(i=0; i<n; )
        {
            if(s.size() == 0 || arr[s.top()] <= arr[i])
                s.push(i++);
            else
            {
                temp = s.top();
                s.pop();
                
                maxArea = max(maxArea, arr[temp] * (s.empty() ? i : (i-s.top()-1 ) ));
            }
        }
        
        while(!s.empty())
        {
            temp = s.top();
            s.pop();
                
            maxArea = max(maxArea, arr[temp] * (s.empty() ? i : (i-s.top()-1) ));
        }
        
        return maxArea;
    }
};



int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}