//Remove duplicate elements from sorted Array
//GFG ACCEPTED


#include <bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    void shift(int arr[], int k, int j)
    {
        for(int i=k; i<j; i++)
        {
            arr[i] = arr[i+1];
        }
    }
    
    int remove_duplicate(int arr[],int n)
    {
        int size = n;
        for(int i=0; i<size; i++)
        {
            if(arr[i] == arr[i+1] && (i+1) < size)
            {
                int t =i;
                shift(arr, i+1, size-1);
                size--;
                i = t-1;
            }
        }
        return size;
    }
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}