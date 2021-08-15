//Longest subsequence such that difference between adjacent is one
//GFG ACCEPTED
//430. DP  O(n^2)

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int longestSubsequence(int n, int arr[])
    {
        if(n == 1)
            return 1;
        int dp[n];
        
        for(int i=0; i<n; i++)
            dp[i] = 1;
        
        for( int i=1; i<n; i++ )
        {
            for( int j=i-1; j>=0; j-- )
            {
                if( abs(arr[i] - arr[j]) == 1 && dp[i] <= dp[j] )
                    dp[i] = dp[j]+1;
            }
        }
        
        int ans = INT_MIN;
        for(int i=0; i<n; i++)
            ans = max(ans, dp[i]);
        return ans;
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}