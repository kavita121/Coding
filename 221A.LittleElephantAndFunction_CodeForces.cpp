//221 A. Little Elephant and Function
//Codeforces

#include<bits/stdc++.h>

using namespace std;

void elephantFunc(int n, vector<int> &a)
{
    if( n == 1 )
        return;
    
    elephantFunc(n-1, a);

    swap(a[n-1], a[n]);
}

int main()
{
    int n;
    cin>>n;

    vector<int> a;
    for(int i=1; i<=n; i++)
        a.push_back(i);
    elephantFunc(n, a);

    
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}