//Permutations of a given string 
//GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
	
	vector<string> ans;
	
	void permute(string s, int l, int r)
	{
	    if( l == r )
	        ans.push_back(s);
	    else
	    {
	        for(int i=l; i<=r; i++)
	        {
	            swap(s[l], s[i]);
	            permute(s, l+1, r);
	            swap(s[l], s[i]);   //backtracking
	        }
	    }
	}
	
	
	vector<string> find_permutation(string s)	
	{
	    permute(s, 0, s.size()-1);
	    sort(ans.begin(), ans.end());
	    return ans;    
	}
};



int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}