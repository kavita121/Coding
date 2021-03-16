//Count triplets with sum smaller than X
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    int count = 0;
	    sort(arr, arr+n);
	    for(int i=0; i<n; i++)
	    {
	        int l = i+1, r = n-1;
	        //using two pointer approach
	        while(l < r)
	        {
	            int temp = arr[l]+arr[r]+arr[i];
	            if(temp < sum)
	            {
                    //1 3 4 5 7
	                //if we are taking 1 3 7 then all the rest triplets as 135 134 will also be taken in answer thus we add this and move forward frm current element by l++
	                count += (r-l);
	                l++;
	            }
	            else if(temp >= sum)
	            {
	                r--;
	                
	            }
	        }
	    }
	    return count;
	}
		 

};



int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    
        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}