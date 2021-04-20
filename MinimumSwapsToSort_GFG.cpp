//Minimum Swaps to Sort 
//GFG ACCEPTED
//Searching & Sorting

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
public:


	int minSwaps(vector<int> &nums)
	{
	    vector<pair <int, int> > p;
	    
	    int n  = nums.size();
	    for(int i=0; i<n; i++)
	    {
	        p.push_back(make_pair(nums[i], i));
	    }
	    sort(p.begin(), p.end());
	    
	    int ans = 0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(i != p[i].second)
	        {
	            ans++;
	            int a, b;
	            a = p[i].second;
	            swap(p[a], p[i]);
	            i--;
	        }
	    }
	    
	    return ans;
	}
	
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  