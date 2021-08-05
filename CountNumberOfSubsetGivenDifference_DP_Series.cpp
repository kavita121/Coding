// Count the number of subset with a given difference
// Aditya Verma DP Series


#include <bits/stdc++.h>
using namespace std;


class Solution{

  public:
  
    
    
	int countSubsetSum(int arr[], int n, int sum)  
	{

        int t[n+1][sum+1];

        for(int i=0; i<=n; i++)
            t[i][0] = 1;
        
        for(int i =1; i<=sum; i++)
            t[0][i] = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(j >= arr[i-1])
                {
                    t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }

        return t[n][sum];
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n], sum = 0;
        for(int i = 0; i < n; i++)
        {
        	cin >> a[i];
            sum += a[i];
        }

        int diff;
        cin>>diff;

        int sumS1 = (diff+sum)/2;
       

	    Solution ob;
        if( (sum + diff) % 2 == 0 )
	        cout << ob.countSubsetSum(a, n, sumS1) << "\n";
        else
            cout<<0<<endl;
	     
    }
    return 0;
}