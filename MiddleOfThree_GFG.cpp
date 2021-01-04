//Middle Of Three
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;



class Solution{
  public:
    int middle(int A, int B, int C)
    {
        if((A > B && B > C) || (C > B && A < B))
            return B;
        else if((B > A && A > C) || (A>B && A<C))
            return A;s
        else
            return C;
        
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  