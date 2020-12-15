//Smallest subarray with sum greater than x 
//Efficient O(n) two pointer approach
//GFG ACCEPTED

#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> arr, int x)
{
    int ans = (int) INFINITY, s=0, i=0, j=0, count = 0;
    while(i <= j && j<arr.size())
    {
        while(s <= x && j<arr.size())
        {
            s += arr[j++];
            count++;
        }
        while(s>x && i<j)
        {
            ans = min(j-i, ans);
            s -= arr[i];
            i++;
        }
    }
    return ans;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<subarraySum(arr, x)<<endl;
    }
	return 0;
}