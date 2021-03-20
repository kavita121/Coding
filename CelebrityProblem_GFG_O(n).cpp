// The Celebrity Problem
// GFG ACCEPTED 
// Time Complexity = O(n) 
// Space Complexity = O(n)  

#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int celebrity(vector<vector<int> >& m, int n) 
    {
        stack<int> st;
        
        //maintaining a stack having all the indices
        for(int i=0; i<n; i++)
        {
            st.push(i);
        }
        
        //comparing the top two elements in the stack and removing one of them on the basis of comparision
        // 0 1 0
        // 0 0 0
        // 0 1 0
        // if m(f,s) == 1 means that fth row can't be celebrity thus it is not included for further but s is pushed back again
        while(st.size() > 1)
        {
            int f, s;
            f = st.top();
            st.pop();
            s = st.top();
            st.pop();
            if(m[f][s] == 1)
            {
                st.push(s);
            }
            else
            {
                st.push(f);
            }
        }
        
        //checking the last remaining index if it is a celbrity or not
        int ind = st.top();
        
        for(int i=0; i<n; i++)
        {
            //if any value is 0 it will mean this person does not know the given candidate thus ind is not a celebrity
            if(m[i][ind] == 0 && i != ind)
            {
                return -1;
            }
        }
        return ind;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}