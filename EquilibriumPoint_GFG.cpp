// Equilibrium Point 
//GFG ACCEPTED
//O(n) - time       O(1) - space


#include <iostream>
using namespace std;


int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}


int equilibriumPoint(long long arr[], int n)
{
    if(n==1)
        return 1;
    
    //f stores sum from left to right
    //b stores sum from right to left

    long long f = arr[0], b = arr[n-1];
    
    for(int i=1, j=n-2; i<n && j>=0; )
    {
        if(f > b)
        {
            b += arr[j--];
        }
        else if(f < b)
        {
            f += arr[i++];
        }
        
        if(f == b && i==j)
        {
            return j+1;
        }
        else if(f==b)
        {
            //to prevent infinite loop
            f += arr[i++];
            b += arr[j--];
        }
    }
    
    return -1;
}