//Count pairs with given sum
//ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        //maintainig a map with its frequency in the array
        map<int, int> num;
        for(int i=0; i<n; i++)
        {
            //if the number exists in the map then incrementing it by 1
            if(num.find(arr[i]) != num.end())
            {
                int x = num.find(arr[i])->second;
                num.erase(num.lower_bound(arr[i]));
                num.insert({ arr[i], x+1});
            }
            else
                num.insert({arr[i], 1});
        }
        int count = 0;
        for(int i=0; i<n; i++)
        {
            //finding the complement to make it k
            int comp = k - arr[i];
            auto it = num.find(comp);
            //if complement is found in the array
            if( it != num.end() )
            {
                //adding the frequency of the element to the count
                count += it->second;
                //if the complement and the number are same then decrementing by 1 to exclude the pais with itself ex 6 = 3+3 
                if(arr[i] == comp)
                    count--;
            }
        }
        //since the same pairs are counted twice returning half of the sum
        return count/2;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}