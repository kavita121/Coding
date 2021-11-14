//Maximum product subset of an array
//252. Greedy

#include<bits/stdc++.h>
    
using namespace std;

int maxProductSubarray(vector<int> arr, int n)
{
    //count number of negative number and check for zero

    int ans = 1;
    bool zero = false;
    int neg = 0, maxNeg = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            maxNeg = max(maxNeg, arr[i]);
            neg++;
        }
        else if(arr[i] == 0)
            zero = true;
    }

    if( !(neg % 2) )
    {
        for(int i=0; i < n; i++)
        {
            if(arr[i] > 0)
                ans *= arr[i];
        }
    }
    else if( neg%2 && neg > 1)
    {
        for(int i=0; i < n; i++)
        {
            if(arr[i] != maxNeg && arr[i] != 0)
                ans *= arr[i];
        }
    }
    else if(neg == 1 && zero)
    {
        ans = 0;
    }

    return ans;
}
    
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout << maxProductSubarray(arr, n);
    
    return 0;
}