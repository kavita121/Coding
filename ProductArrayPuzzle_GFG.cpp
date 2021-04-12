//Product array puzzle
//GFG ACCEPTED
//DSA - Searching And Sorting

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
{
    vector<long long int> ans(n);
    
    long long int prod = 1;
    
    int zero = 0;
    
    //first of all finding the total product w/o multiplying with 0
    for(int i=0; i<n; i++)
    {
        if(nums[i] == 0)
        {
            //counting the numbr of zeroes
            zero++;
        }
        else
        {
            prod *=  nums[i];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        //if the current number is not equal to 0 and we have no 0s then we just get the value by dividing the current element with total product
        if(nums[i] != 0 && zero == 0)
            ans[i] = prod / nums[i];
        //if the current element is not 0 but we have more one or more 0s then the total product will become 0
        else if((nums[i] != 0 && zero >= 1) || (nums[i] == 0 && zero > 1))
            ans[i] = 0;
        //this means the current element is zero and there is only one zero in the array thus if we remove the current element from product we'll get total product of the rest of elements
        else
            ans[i] = prod;
    }
    
    return ans;
}
