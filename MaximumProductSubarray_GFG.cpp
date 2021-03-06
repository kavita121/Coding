//Maximum product subarray GFG
//ACCEPTED

#include <bits/stdc++.h>

using namespace std;


class Solution{
public:

	long long maxProduct(int *arr, int n) 
	{
	    long long minValue, maxValue, maxProd =  arr[0];
	    minValue = maxValue = arr[0];
	    for(int i=1; i<n; i++)
	    {
            if(arr[i]<0)
                swap(minValue, maxValue);
	        maxValue = max((long long)arr[i], (long long)arr[i]*maxValue);
	        minValue = min((long long)arr[i], (long long)arr[i]*minValue);
	        
	        maxProd = max(maxProd, maxValue);
	    }
	    return maxProd;
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  