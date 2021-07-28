//221 A. Little Elephant and Function
//Codeforces
//Accepted

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int> a;
    a.push_back(n);

    for(int i=1; i<n; i++)
        a.push_back(i);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}