//Move all negative numbers to beginning and positive to end with constant extra space

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int i=0, j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}