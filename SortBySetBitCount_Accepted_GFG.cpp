//Sort by Set Bit Count 
//GFG ACCEPTED
//Searching And Sorting


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    static int countSetBits(int x)
    {
        int ans = 0;
        while(x)
        {
            if(x&1)
                ans++;
            x = x>>1;
        }
        return ans;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        multimap<int, int, greater<int>> m;
        for(int i=0; i<n; i++)
        {
            int bits = countSetBits(arr[i]);
            m.insert({bits, arr[i]});
        }
        
        int i=0;
        for(auto itr = m.begin(); itr != m.end(); itr++, i++)
        {
            arr[i] = itr->second;
        }
    }
};

// { Driver Code Starts.

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
  // } Driver Code Ends