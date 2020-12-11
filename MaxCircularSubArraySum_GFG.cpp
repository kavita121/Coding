// Max Circular SubArray Sum
#include<bits/stdc++.h>
using namespace std;


int circularSubarraySum(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    int sum=0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    int maxSoFar = arr[0], maxEndingHere = arr[0], minEndingHere = arr[0], minSoFar = arr[0];
    int i = 1;
    do{
        maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
        
        minEndingHere = min(minEndingHere + arr[i], arr[i]);
        minSoFar = min(minEndingHere, minSoFar);
        
        i = (i+1);
        
    }while( i < n);
    
    if(sum == minSoFar)
        return maxSoFar;
    
    return max(maxSoFar, sum-minSoFar);
}


int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    //calling function
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  