//Row with max 1s
//GFG ACCEPTED
//Efficient  O(m+n) complexity


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
public:

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int index = -1, i = 0, j = m-1;
	    while(i < n && j >= 0)
	    {
	        if( arr[i][j] == 1 )
	        {
	            j--;
	            index = i;
	        }
	        else
	        {
	            i++;
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