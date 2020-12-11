//Greedy Algorithms Max Min
//Hackerrrank  ACCEPTED

#include <bits/stdc++.h>

using namespace std;


int maxMin(int k, vector<int> arr) 
{
    //sorting the array first
    sort(arr.begin(), arr.end());
    int res = (int) INFINITY; 
    //checking for all the elements for minimum difference between ith and (i+k-1)th element
    for(int i=0; i<=(arr.size())-k; i++)
    {
        res = min(res, abs(arr[i+k-1] - arr[i]));   
    }
    return res;
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maxMin(k, arr);
}
