//Rearrange array in alternating positive & negative items O(n) time complexity
//does not maintain order of appearance of elements

//Working

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter the array:\n";
    vector<int> arr(n);
    for(int i=0; i<n; i++)  
        cin>>arr[i];
    //shifting all negative to end
    int i=0, j=n-1;
    while( i < j )
    {
        while(arr[j] < 0 && j>=0)
        {
            j--;
        }
        while(arr[i] >= 0 && i < n)
        {
            i++;
        }
        if(i < j)
            swap(arr[i], arr[j]);
    }
    cout<<i<<endl;
    j = 0;
    while(j<i && i<n)
    {
        if( j%2 == 0 && arr[j] >= 0 )
        {
            swap(arr[j++], arr[i++]);
        }
        else 
            j++;
    }
    for(int i=0; i<n; i++)  
        cout<<arr[i]<<" ";
    return 0;
}