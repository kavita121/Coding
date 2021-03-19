// The Celebrity Problem
// GFG ACCEPTED 
// Complexity = O(n^2)

#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int celebrity(vector<vector<int> >& m, int n) 
    {
        int row = -1;
        
        //finding all the rows having all zero
        for(int i=0; i<n; i++)
        {
            int f = 1;
            for(int j=0; j<n; j++)
            {
                if(m[i][j] == 1)
                {
                    f = 0;
                    break;
                }
            }
            if(f == 1)
            {
                row = i;
                break;
            }
        }
        
        
        //checking if zero row is a celebrity
        int f=1;
        for(int c=0; c<n; c++)
        {
            if(c != row && m[c][row] == 0)
            {
                f=0;
                break;
            }
        }
        
        if(f)
            return row;
        else
            return -1;
        
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