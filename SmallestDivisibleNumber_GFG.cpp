//  Smallest divisible number
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:

    long long gcd(long long a, long long b)
    {
        if(b==0)
            return a;
        else
            return gcd(b, a%b);
    }
    
    long long getSmallestDivNum(long long n)
    {
        long long lcm = 1;
        for(long long i=2; i<=n; i++)
        {
            lcm = (i*lcm)/gcd(i,lcm);
        }
        return lcm;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<< ob.getSmallestDivNum(n)<<endl;
    }
    return 0;
}  