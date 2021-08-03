// Count of subsets with sum equal to X
//Correct

#include<bits/stdc++.h> 
using namespace std; 



class Solution{   
public:
    int countSubsetSum(int n, int arr[], int sum)
    {
        int dp[n+1][sum+1];
        
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i=1; i <= sum; i++)
        {
            dp[0][i] = 0;
        }
        
        
        for(int i=1; i <= n; i++)
        {
            for(int j=1; j <= sum; j++)
            {
                
                if(j < arr[i-1])
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = (dp[i-1][j] + dp[i-1][j-arr[i-1]]);
                }
                
            }
        }
        
        return dp[n][sum];
    }
};



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.countSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 