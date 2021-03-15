//Stickler Thief
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


ll FindMaxSum(ll arr[], ll n)
{
    ll dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for(int i=2; i<n; i++)
    {
        //taking the maximum of previous element in dp or sum of the alternate previous element + the current element in array
        dp[i] = max(dp[i-1], dp[i-2]+arr[i]);
    }
    //at the end we get the maximum loot in all the houses
    return dp[n-1];
}



int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
			
		//calling function FindMaxSum()
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}