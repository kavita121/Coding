//Max subarray in array - Kadane's Algorithm
//Accepted

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int maxSoFar = arr[0], maxEndingHere = arr[0], right=0, left = 0;
    for(int i=1; i<n; i++)
    {
        maxEndingHere += arr[i];
        if(maxEndingHere < arr[i])
        {
            maxEndingHere = arr[i];
            left = right = i;
        }
        if(maxEndingHere > maxSoFar)
        {
            maxSoFar = maxEndingHere;
            right = i;
        }
    }
    //extra added part of printing the elements too
    cout<<"The elements of array selected: \n";
    for(int i=left; i<=right; i++)
        cout<<arr[i]<<" ";
    cout<<endl<<maxSoFar;
    return 0;
}