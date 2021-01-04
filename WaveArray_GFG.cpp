// Wave array
//GFG ACCEPTED


#include<bits/stdc++.h>
using namespace std;



void convertToWave(int *arr, int n)
{
    //'b' denotes that the next element must be bigger than current one
    //'s' denotes that the next element must be smaller than current one
    char c = 'b';
    
    for(int i=0; i<n-1; i++)
    {
        if(c == 'b')
        {
            if(arr[i] < arr[i+1])
                swap(arr[i], arr[i+1]);
            c = 's';
        }
        else
        {
            if(arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
            c = 'b';
        }
    }
    
}


int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  