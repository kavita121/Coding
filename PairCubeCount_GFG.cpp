//Pair Cube Count GFG
//ACCEPTED


#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
    int pairCubeCount(int N)
    {
        int count = 0;
        for(int i=1; i<=cbrt(N); i++)
        {
            int diff = N-(i*i*i);
            int cuberoot = round(cbrt(diff));
            if(pow(cuberoot, 3) == diff)
                count++;
        }
        return count;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends