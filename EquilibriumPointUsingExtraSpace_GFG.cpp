//Equilibrium Point using Extra Space

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
    long long front[n]={0}, back[n]={0};
    
    front[0] = arr[0];
    back[n-1] = arr[n-1];
    
    for(int i=1, j=n-2; i<n; i++, j--)
    {
        front[i] = front[i-1]+arr[i];
        back[j] = back[j+1]+arr[j];
    }
    
    for(int i=0; i<n; i++)
    {
        if(front[i] == back[i])
            return i+1;
    }
    
    
    return -1;
}