// Find Position Of a set bit
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findPosition(int n) 
    {
        bool present = false;
        int res = 0;
        while(n > 0)
        {
            res++;
            if(n%2 && present == false)
            {
                present = true;
            }
            else if(n%2)
                return -1;
            n /= 2;
        }
        if(present)
            return res;
        return -1;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
} 