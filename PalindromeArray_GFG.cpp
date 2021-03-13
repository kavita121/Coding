// Palindromic Array
//GFG ACCEPTED

#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}


bool checkPalindrome(int num)
{
    int t = num, rev=0;
    while(t>0)
    {
        rev = rev*10 + (t%10);
        t /= 10;
    }
    if(num == rev)
        return true;
    else 
        return false;
}

int PalinArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(!checkPalindrome(a[i]))
            return 0;
    }
    return 1;
}