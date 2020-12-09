//Check if a string is Plaindrome or not
//GFG ACCEPTED
 
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	
	int isPlaindrome(string str)
	{
	    for(int i=0, j=str.size()-1; i<str.size()/2; i++, j--)
	    {
	        if(str[i] != str[j])
	            return 0;
	    }
	    return 1;
	}

};



int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
} 