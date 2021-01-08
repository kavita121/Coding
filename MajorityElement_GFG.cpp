// Majority Element
//GFG ACCEPTED      O(nlogn)

#include<bits/stdc++.h>
using namespace std;


int majorityElement(int arr[], int n)
{
    sort(arr, arr+n);
    
    int prev = arr[0];
    int count = 0;
    int i =0;
    while(i<n)
    {
        count = 0;
        while(i<n && arr[i] == prev)
        {
            count++;
            i++;
        }
        if(count > (n/2))
            return prev;
        
        prev = arr[i];
    }
    
    return -1;
    
}



int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}