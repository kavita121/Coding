// Subarray with 0 sum 
//ACCEPTED


#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}


bool subArrayExists(int arr[], int n)
{
    int sum = 0;
    unordered_set<int> sumSet;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
        else
            sumSet.insert(sum);
    }
    return false;
}


