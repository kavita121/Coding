//Ternary Search

#include<bits/stdc++.h>
#define ll long long

using namespace std;

ternarySearch(vector<int> arr, int l, int r, int element)
{
    int mid1, mid2;
    while( l <= r)
    {
        mid1 = l + (r-l)/3;
        mid2 = r - (r-l)/3;
        if(arr[mid1] == element)
        {
            return mid1;
        }
        else if(arr[mid2] == element)
        {
            return mid2;
        }
        else if(element < arr[mid1])
        {
            r = mid1-1;
        }
        else if(element > arr[mid2])
        {
            l = mid2+1;
        }
        else
        {
            l = mid1+1;
            r = mid2+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the array: ";
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int element;
    cout<<"Enter element to be searched: ";
    cin>>element;
    int l = 0, r = n-1;
    int ptr;
    int pos = ternarySearch(arr, l, r, element);
    if(pos<0)
        cout<<"Element not found!! :(";
    else
    {
        cout<<element<<" found at position: "<<pos+1;
    }
    
    return 0;
}