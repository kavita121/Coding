//Longest Repeating Subsequence 
//GFG ACCEPTED

#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    //using lcs for solving this
		    
		    int n = str.size();
		    int lcs[n+1][n+1];
		    for(int i=0; i<=n; i++)
		    {
		        lcs[i][0] = 0;
		        lcs[0][i] = 0;
		    }
		    for(int i=0; i<=n; i++)
		    {
		        for(int j=0; j<=n; j++)
		        {
		            if(i==0 || j==0)
		            lcs[i][j] = 0;
		            //We want the subsequence when both the characters are same and don't have the same index
		            //this i != j condition is applied
		            else if(str[i-1] == str[j-1] && i != j)
		            {
		                lcs[i][j] = lcs[i-1][j-1]+1;
		            }
		            else
		            {
		                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
		            }
		        }
		    }
		    return lcs[n][n];
		}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}