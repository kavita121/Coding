//TLE occurred
//GFG Question 
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > fourSum(vector<int> &a, int k);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int> > ans = fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}


bool binarySearch(vector<int> arr, int l, int h, int x)
{
    int mid;
    while(l <= h)
    {
        mid = (h+l)/2;
        if(arr[mid] == x)
            return true;
        else if(arr[mid]>x)
            h = mid-1;
        else
            l = mid+1;
    }
    return false;
}

vector<vector<int> > fourSum(vector<int> &arr, int val) 
{
    vector<vector<int> > ans;
    sort(arr.begin(), arr.end());
    
    int n = arr.size();
    
    
    for(int i=0; i<n-3; i++)
    {
        int num = arr[i];
        for(int j=i+1; j<n-2; j++)
        {
            num += arr[j];
            for(int k=j+1; k<n-1; k++)
            {
                num += arr[k];
                if(binarySearch(arr, k+1, n-1, val-num))
                {
                    vector<int> vec{arr[i], arr[j], arr[k], val-num};
                    if(find(ans.begin(), ans.end(), vec) == ans.end())
                        ans.push_back(vec);
                }
                num -= arr[k];
            }
            num -= arr[j];
        }
    }
    
    return ans;
}
