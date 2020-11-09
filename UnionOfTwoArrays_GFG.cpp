//Union of two array GFG 
//CORRECT

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> array;
        int n, m, x;
         cin>>n>>m;
         for(int i=0; i<n; i++)
         {
             cin>>x;
             array.insert(x);
         }
         for(int i=0; i<m; i++)
         {
             cin>>x;
             array.insert(x);
         }
         cout<<array.size()<<endl;
    }
	return 0;
}