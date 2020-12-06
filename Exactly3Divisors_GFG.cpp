//Exactly 3 Divisors GFG
//ACCEPTED


#include <bits/stdc++.h>
using namespace std;



bool isPrime(int n)
{
    if(n==0 || n==1)
        return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int exactly3Divisors(int n)
{
    int res = 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(isPrime(i))
            res++;
    }
    return res;
}



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
 }