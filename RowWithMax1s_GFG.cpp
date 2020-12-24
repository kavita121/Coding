//Row with max 1s 
//GFG  ACCEPTED
//Bad solution : O(n*m) complexitys

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int max = 0, index = -1;
	    for(int i=0; i<n; i++)
	    {
	        int count = 0;
	        for(int j=0; j<m; j++)
	        {
	            if(arr[i][j])
	                count++;
	        }
	        if(count > max)
	        {
	            index = i;
	            max = count;
	        }
	    }
	    return index;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}