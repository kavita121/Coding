//Move all negative numbers to beginning and positive to end with constant extra space
//Correct

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
    int mid=0, pos=0, high=n-1;
    while(mid<=high)
    {
        if( arr[mid] < 0 )
        {
            swap(arr[mid++], arr[pos++]);
        }
        else
        {
            mid++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}