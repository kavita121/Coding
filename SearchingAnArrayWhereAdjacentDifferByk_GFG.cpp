//Searching in an array where adjacent differ by at most k
//GFG CORRECT

#include<bits/stdc++.h>

using namespace std;

int solution(int arr[], int n, int k, int x)
{
    for(int i=0; i<n; )
    {
        if(arr[i] == x)
            return i;
        
        i = i + max(1, abs(arr[i] - x)/k);
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k, x;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++)
        {
            cin >> arr[i];
        }

        cin>>k>>x;
        
        cout << solution(arr, n, k, x) << endl;
    }

    return 0;
}