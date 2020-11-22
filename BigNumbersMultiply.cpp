//Big Multiply
//Working

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a, b, sum;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    vector<int> first, second;
    int temp = a;
    while(a>0)
    {
        first.push_back(a%10);
        a /= 10;
    }
    a = temp;
    temp = b;
    while(b>0)
    {
        second.push_back(b%10);
        b /= 10;
    }
    b = temp;
    int n = first.size(), m = second.size();
    int product[ n+m ]={0};
    for(int i=0; i<m; i++)
    {
        int curr = second[i], carry = 0;
        int k = i;
        for(int j=0; j<n; j++)
        {
            int p = curr*first[j] + carry;  
            int sum = product[k] + p%10;
            p /= 10;
            carry = p%10;
            product[k++] = sum%10;
            sum /= 10;
            carry += sum%10;
        }
        if(carry)
            product[k] += carry;
    }
    for(int i=n+m-1; i>=0; i--)
        cout<<product[i]<<" ";
    return 0;
}