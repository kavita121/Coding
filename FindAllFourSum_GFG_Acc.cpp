// Find All Four Sum Numbers
//GFG ACCEPTED

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



vector<vector<int> > fourSum(vector<int> &arr, int val) 
{
    vector<vector<int> > ans;
    //we are using a set here because we can get the same answer more than once and 
    //using vector and finding if it occurred or not is more time taking than using a set 

    set<vector<int>> res;
    sort(arr.begin(), arr.end());
    
    int n = arr.size();
    
    for(int i=0; i<n-3; i++)
    {
        
        for(int j=i+1; j<n-2; j++)
        {
            
            int p=j+1, q=n-1;
            while(p < q)
            {
                if(arr[p] + arr[q] + arr[i] + arr[j] == val)
                {
                    vector<int> vec{arr[i], arr[j], arr[p], arr[q]};
                    res.insert(vec);
                    p++;
                    q--;
                }
                else if(arr[p] + arr[q] + arr[i] + arr[j] < val)
                    p++;
                else
                    q--;
            }
            
        }
    }
    //copying the contents of the given set into the final vector that'll be returned as answer
    for(auto x: res)
        ans.push_back(x);
    return ans;
}
