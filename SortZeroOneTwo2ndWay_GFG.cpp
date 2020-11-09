//Sort an array of 0s, 1s and 2s GFG 2nd Approach
//Correct Solution

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int low=0, mid=0, high=n-1;
        while(mid <= high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low++], arr[mid++]);
            }
            else if(arr[mid] == 1)
                mid++; 
            else
                swap(arr[mid], arr[high--]);
        } 
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout<<endl;
    }
}