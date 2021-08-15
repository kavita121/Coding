//426. Space Optimized Solution of LCS
//GFG ACCEPTED
//Dynamic Programing

#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;



class Solution
{
    public:
    
    
    int lcs(int m, int n, string x, string y)
    {
        vector<int> first(n+1, 0), second(n+1);
        
        second[0] = 0;    
            
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(x[i-1] == y[j-1])
                    second[j] = 1 + first[j-1];
                else
                    second[j] = max(second[j-1], first[j]);
            }
            swap(first, second);
        }
        
        return first[n];
    }
};



int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}