// Triplet Sum in Array GFG
//ACCEPTED
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int present = 0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-2; i++)
        {
            int find = x-arr[i];
            int start=i+1, end=arr.size()-1;
            while(start<end)
            {
                if(arr[start]+arr[end] == find)
                {
                    present = 1;
                    break;
                }
                else if(arr[start]+arr[end] > find)
                    end--;
                else if(arr[start]+arr[end] < find)
                    start++;
            }
            if(present)
                break;
        }
        cout<<present<<endl;
    }
	return 0;
}