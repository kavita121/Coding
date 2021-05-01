//Find first set bit 
//GFG ACCEPTED
//Easy

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int ans = 0;
        while(n>0)
        {
            ans++;
            if(n%2 == 1)
            {
                return ans;
            }
            n /= 2;
        }
        return ans;
    }
};

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends