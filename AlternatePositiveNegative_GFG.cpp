//Rearrange array in alternating positive & negative items
//WORKING

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  
        cin>>arr[i];
    int flag = 1;  // 1 means positive  0 means negative
    for(int i = 0; i<n-1; i++)
    {
        int j = i+1;
        if(flag)
        {
            //here we have to put a negative number in ith position
            //if the current element is positive then search for a negative element
            if(arr[i] > 0)
            {
                while(arr[j] >= 0 && j<n)
                    j++;
                //when -ve element is found it is swapped with the ith position
                if(j < n)
                    swap(arr[i], arr[j]);
            }
            flag = 0;       //the value at this position is negative now next should be positive
        }
        else
        {
            if(arr[i] < 0)
            {
                while(arr[j] < 0 && j<n)
                    j++;
                if(j < n)
                    swap(arr[i], arr[j]);
            }
            flag = 1;       //the value at this position is +ve now next should be -ve
        }
    }
    for(int i=0; i<n; i++)  
        cout<<arr[i]<<" ";
    return 0;
}