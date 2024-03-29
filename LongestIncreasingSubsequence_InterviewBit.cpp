//Longest Increasing Subsequence
//InterviewBit ACCEPTED

int Solution::lis(const vector<int> &A) 
{
    int n = A.size();
    vector<int> dp(n, 1);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(A[i] > A[j] && dp[i] <= dp[j])
                dp[i] = dp[j]+1;
        }
    }

    return *max_element(dp.begin(), dp.end());
}
