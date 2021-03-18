//Next Greater Element
//GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> result(n);
        stack<int> s;
        
        //maintaining a stack which has the index of elements as its value 
        s.push(0);
        
        for(int i=1; i<n; i++)
        {
            //pushing in stack when the current value is less than or equal to the element at index on the top of stack
            if(!s.empty() && arr[i] <= arr[s.top()])
            {
                s.push(i);
            }
            else
            {
                //putting the current value as the value of those indices where the value is less than th current value at i 
                while(!s.empty() && arr[i] > arr[s.top()])
                {
                    int ind = s.top();
                    result[ind] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }

        //inserting -1 for all remaining items
        while(!s.empty())
        {
            result[s.top()] = -1;
            s.pop();
        }
        
        return result;
    }
};




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}