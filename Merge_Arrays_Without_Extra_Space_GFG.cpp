//Merge Without Extra Space GFG
//TLE NOT ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) 
	{
        for(int i=0, j=0; j<m && i<n;)
        {
            if(arr1[i] > arr2[j])
            {
                swap(arr1[i], arr2[j]);
                int k = j+1, temp = j;
                while(arr2[k] < arr2[j] && k<m)
                {
                    swap(arr2[k], arr2[j]);
                    j++;
                    k++;
                }
                j =  temp;
                i++;
            }
            else if(arr1[i] < arr2[j])
            {
                i++;
            }
        }
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}