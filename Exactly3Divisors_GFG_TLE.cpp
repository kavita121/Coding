//Exactly 3 Divisors GFG
//TLE

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




void makeSieve(vector<bool> &sieve)
{
    int n = sieve.size();
    if(n>=1)
        sieve[0] = sieve[1] = false;
    for(int i=2; i*i<n; i++)
    {
        if(sieve[i])
        {
            for(int j=i*i; j<n; j+=i)
                sieve[j]=false;    
        }
    }
}


int exactly3Divisors(int n)
{
    int res = 0;
    vector<bool> sieve(n+1, true);
    makeSieve(sieve);
    for(int i=2; i*i<=n; i++)
    {
        if(sieve[i])
            res++;
    }
    return res;
}

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends