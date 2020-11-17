// Set Bits GFG
//ACCEPTED

#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
public:
    int setBits(int n)
    {
        int setBit = 0;
        while(n>0)
        {
            if(n%2)
                setBit++;
            n /= 2;
        }
        return setBit;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}