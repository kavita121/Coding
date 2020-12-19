//First and last occurrences of X
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        int first = -1, last = -1;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        //using binary search
        int low=0, high=n-1, mid ;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(arr[mid] == x)
            {
                if(first == -1)
                {
                    first = mid;
                }
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] < x)
                low = mid+1;
            else
                high = mid-1;
        }
        //last occurrence
        low = 0;
        high = n-1;
        if(first != -1)
        {
            while(low <= high)
            {
                mid = (low+high)/2;
                if(arr[mid] == x)
                {
                    last = mid;
                    low = mid+1;
                }
                else if(arr[mid] < x)
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        if(first == -1)
            cout<<-1<<endl;
        else
            cout<<first<<" "<<last<<endl;
    }
	return 0;
}