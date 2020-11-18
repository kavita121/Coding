//Bit Difference GFG
//ACCEPTED

#include<bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b)
{
    int count = 0;
    while(a>0 || b>0)
    {
        //checking for each bit in both the number
        int bitA = a%2, bitB = b%2;
        //if the bits are not equal then one of them needs to be flipped to make them equal
        if(bitA != bitB)
            count++;
        a /= 2;
        b /= 2;
    }
    return count;
}


/*

2nd Way:

int countBitsFlip(int a, int b)
{
    int count = 0;
    //finding a xor b
    int c = a ^ b;
    while(c>0)
    {
        //counting the number of set bits as the set bits indicate different bits in a and b ex: 0^1 = 1
        if( c % 2 )
            count++;
        c /= 2;
    }
    return count;
}*/


int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

		cout<<countBitsFlip(a, b)<<endl;
	}
	return 0;
}