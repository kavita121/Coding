//Find Missing And Repeating
//GFG ACCEPTED

#include <bits/stdc++.h>

using namespace std;


class Solution{
public:

    int res[2];

    int *findTwoElement(int *arr, int n) 
    {
        sort(arr, arr+n);
        int repeat = 0, missing = -1;
        int count = 1;
        for(int i=0; i<n; i++)
        {
            if(arr[i] != count  && missing == -1)
            {
                missing = count;
            }
            if(i < n-1)
            {
                if(arr[i] == arr[i+1])
                {
                    repeat = arr[i];
                    count-- ;
                }
            }
            count += 1;
        }
        if(arr[n-1] != n)
            missing = n;
        res[0] = repeat ;
        res[1] = (missing == -1) ? 0 : missing;
        
        return res;
    }
    
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}