//Array Manipulation
//Hackerrank    
//ACCEPTED

#include <bits/stdc++.h>

using namespace std;


long arrayManipulation(int n, vector<vector<int>> queries) 
{
    vector<long> arr(n, 0);
    for(int i=0; i<queries.size(); i++)
    {
        //updating the a^th element and b+1^th element with (negative) -addendum 
        int add = queries[i][2], a = queries[i][0], b = queries[i][1];
        arr[a] += add;
        if((b+1) < n)
        {
            arr[b+1]  -= add;
        }
    }
    long max = -(int)INFINITY, sum = 0;
    //taking the prefix sum gives us the updated value of each of the index value of array
    for(long x: arr)
    {
        sum += x;
        if(sum > max)
            max = sum;
    }
    return max;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> query(m, vector<int> (3));
    for(int i=0; i<m; i++)
    {
        int a, b, k;
        cin>>a>>b>>k;
        //--a and --b as we are taking input in 1-based index ans we're using 0-based indexing
        query[i][0] = --a;
        query[i][1] = --b;
        query[i][2] = k;
    }
    cout<<arrayManipulation(n, query);
    return 0;
}
