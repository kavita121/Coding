//Digits In Factorial 
//GFG ACCEPTED


#include<bits/stdc++.h>
using namespace std;


int digitsInFactorial(int n)
{
    if(n < 0)
        return 0;
    double sum = 0;
    for(int i=n; i>=1; i--)
    {
        sum += log10(i);
    }
    return floor(sum)+1;
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
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}