// Minimum sum partition
// GFG ACCEPTED


#include <bits/stdc++.h>
using namespace std;


class Solution{

  public:
  
    int isSubsetSum(int n, int arr[], int sum)
    {
        bool dp[n+1][sum+1];
        
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = true;
        }
        
        for(int i=1; i<=sum; i++)
        {
            dp[0][i] = false;
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(j >= arr[i-1])
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        int minDiff = sum;
        
        for(int i=1; i <= (sum/2); i++)
        {
            if(dp[n][i])
            {
                minDiff = min(minDiff, sum - 2*i);
            }
        }
        
        return minDiff;
        
    }
    
    
	int minDifference(int arr[], int n)  
	{
	    int range = 0;
	    
	    for(int i=0; i<n; i++)  
	        range += arr[i];
        
	    return isSubsetSum(n, arr, range);
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}