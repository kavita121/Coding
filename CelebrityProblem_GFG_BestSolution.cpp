// The Celebrity Problem
// GFG ACCEPTED 
// Time Complexity = O(n) 
// Space Complexity = O(1)

#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int celebrity(vector<vector<int> >& m, int n) 
    {

        //using two pointer approach

        int l=0, r=n-1;
        
        while(l<r)
        {
            //if l knows r it means l can't be celebrity
            if(m[l][r] == 1)
                l++;
            //if l does not know r then r can not be celebrity thus r discarded
            else
                r--;
        }
        
        //cheking if the last remainig row is celebrity or not 
        for(int i=0; i<n; i++)
        {
            if(m[i][l] == 0 && i != l)
                return -1;
        }
        return l;
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