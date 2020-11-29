//Maximum profit by buying and selling a share

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int prof=0, p;
    set<int, greater<int>> profit;
    int minima=0, maxima=0;
    for(int i=0; i<n; i++)
    {
        while(i<n-1 && arr[i] >= arr[i+1])
            i++;
        minima = i;
        while(i<n-1 && arr[i] <= arr[i+1])
            i++;
        maxima = i;
        if(maxima<n)
        {
            prof = arr[maxima] - arr[minima];
            cout<<arr[minima]<<" "<<arr[maxima]<<endl;
            if(prof>0)
            {
                profit.insert(prof);
                p += prof;
            }
        }
    }
    cout<<"profit: "<<p;
    auto itr = profit.begin();
    prof=0;
    for(int i=0; i<2 && itr!=profit.end(); i++)
    {
        prof += *itr;
        itr++;
    }
    cout<<prof;
    return 0;
}