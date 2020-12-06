//Modular Multiplicative Inverse
//GFG ACCEPTED

#include<iostream>
using namespace std;



int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int modInverse(int a, int m)
{
    if(gcd(a, m) != 1)
        return -1;
    for(int i=0; i<m; i++)
    {
        if(a*i % m == 1)
            return i;
    }
    return -1;
    
}



int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		
		//calling function modInverse()
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}   