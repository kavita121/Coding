//Addition Under Modulo GFG
//ACCEPTED

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

const int mod = 1e9+7;
//User function Template for C++

long long sumUnderModulo(long long a,long long b)
{
    return ((a%mod)+(b%mod))%mod;
}

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends