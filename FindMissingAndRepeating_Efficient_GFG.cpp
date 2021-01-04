// Find Missing And Repeating
//GFG ACCEPTED O(n) complexity

#include <bits/stdc++.h>

using namespace std;

//O(n) solution using XOR

class Solution{
public:

    int res[2];

    int *findTwoElement(int *arr, int n) 
    {
        int repeat = 0, missing = 0;
        int x = arr[0];
        
        //taking the xor of all the array elements and numbers : 1...n
        for(int i = 0, c=1; i<n; i++, c++)
        {
            x ^= arr[i];
            x ^= c;
        }

        //finding the first set bit in the xor value
        int ind = 0;
        while(x > 0)
        {
            if(x%2 == 1)
            {
                break;
            }
            ind++;
            x /= 2;
        }
        
        //finding the number having that one bit that was found in previous step as set(1)
        int num = pow(2, ind);

        int a=0, b=0;

        //putting the elements in 2 sets one having the given bit set and the other having it unset in: a and b
        ///doing xor with array elemnts
        for(int i=0; i<n; i++)
        {
            if(num & arr[i])
                a ^= arr[i];
            else
                b ^= arr[i];
        }

        //doing xor with the numbers: 1...n
        for(int i=1; i<=n; i++)
        {
            if(num & i)
                a ^= i;
            else
                b ^= i;
        }

        //finding the element that is repetitive and the one that is missing 
        for(int i=0; i<n; i++)
        {
            if(arr[i] == a)
            {
                repeat = a;
                break;
            }
            else if(arr[i] == b)
            {
                repeat = b;
                break;
            }
        }
        if(repeat == a)
        {
            res[0] = a;
            res[1] = b;
        }
        else
        {
            res[0] = b;
            res[1] = a;
        }
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