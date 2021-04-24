//Maximum Rectangular Area in a Histogram 
//GFG SIGSEV(maybe due to hugh memory usage)
//Stack and Queue


#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    long long getMaxArea(long long arr[], int n)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return arr[0];
        stack<long long> s;
        long long left[n], right[n];
        
        s.push(0);
        left[0] = 0;
        right[n-1] = n-1;
        //filling the left array
        for(int i=1; i<n; i++)
        {
            while(s.size() > 0 && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                left[i] = s.top()+1;
                s.push(i);
            }
            else
            {
                left[i] = 0;
                s.push(i);
            }
        }
        
        
        //emptying up the stack
        while(!s.empty())
            s.pop();
        
        
        s.push(n-1);
        //filling the right array
        for(int i=n-2; i>=0; i--)
        {
            while(s.size() > 0 && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                right[i] = s.top()-1;
                s.push(i);
            }
            else
            {
                right[i] = n-1;
                s.push(i);
            }
        }
       
        //calculating areas
        long long maxArea = INT_MIN;
        long long ar;
        for(int i=0; i<n; i++)
        {
            ar = (right[i] - left[i] + 1) * arr[i];
            maxArea = max(maxArea, ar);
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