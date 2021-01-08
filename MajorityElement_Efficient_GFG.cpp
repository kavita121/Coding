//Majority element
//GFG ACCEPTED
//Moore's Voting Algorithm O(n)- time

#include<bits/stdc++.h>
using namespace std;


int majorityElement(int arr[], int n)
{
    //finding the candidate majority element
    
    int count = 1, candidate = arr[0];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if(count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }
    
    //checking if the candidate element is actually a majority element
    int check = 0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == candidate)
            check++;
    }
    
    return (check > (n/2)) ? candidate : -1;
    
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