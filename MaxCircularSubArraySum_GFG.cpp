// Max Circular SubArray Sum
#include<bits/stdc++.h>
using namespace std;


int circularSubarraySum(int arr[], int n)
{
    if(n == 1)
        return arr[0];
        
    int sumArray = 0;
    
    for(int i=0; i<n; i++)
        sumArray += arr[i];
        
    int minSoFar=arr[0], minEndingHere=arr[0];
    int maxSoFar=arr[0], maxEndingHere=arr[0];
    
    for(int i=1; i<n; i++)
    {
        //Finding minimum
        minEndingHere = min(arr[i], arr[i]+minEndingHere);
        minSoFar = min(minEndingHere, minSoFar);
        
        //Finding maximum
        maxEndingHere = max(arr[i], arr[i]+maxEndingHere);
        maxSoFar = max(maxEndingHere, maxSoFar);
    }
    
    int CircularSum = sumArray - minSoFar;
    
    if(sumArray == minSoFar)
        return maxSoFar;
        
    return max(maxSoFar, CircularSum);
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