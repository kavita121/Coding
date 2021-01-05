// Count total set bits
// GFG ACCEPTED


#include<bits/stdc++.h>
using namespace std;


int countSetBits(int n)
{
    if(n==0)
        return 0;
        
    int count = 0;
    
    //finding the power of nearest closest power of 2
    int b = log2(n);

    //calculating the value from power of 2
    int nearest2 = pow(2, b);
    count += b*(nearest2/2);
    
    count += (n - nearest2 + 1);
    
    return count + countSetBits(n-nearest2);
}



int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}