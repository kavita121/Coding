// Sort by Set Bit Count 
// GFG ACCEPTED
// Searching And Sorting

#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    
    //this is a comparator which compares the number of set bits in a and b
    static bool compare(int a, int b)
    {
        // __builtin_popcount() is a function to calculate the number of set bits in a number
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        //using the stable_sort() function already availabel in c++
        stable_sort(arr, arr+n, compare);
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}