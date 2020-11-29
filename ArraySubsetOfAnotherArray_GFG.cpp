//Array Subset of another array 
//ACCEPTED

#include <iostream>
#include <algorithm>

using namespace std;

bool binary_search(int arr[], int n, int key)
{
    bool present;
    int low = 0, high = n-1, mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(arr[mid] == key)
            return true;
        else if( arr[mid] > key )
            high = mid-1;
        else
            low = mid+1;
    }
    return false;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n], sub[k];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i <k; i++)
            cin>>sub[i];
        sort(arr, arr+n);
        int f = 1;
        for(int i=0; i<k; i++)
        {
            if(!binary_search(arr, n, sub[i]))
            {
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
	return 0;
}