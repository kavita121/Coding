//Rat in a Maze Problem - I
//GFG ACCEPTED
//Backtracking Section


#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    vector<string> ans;
    
    void checkPath(vector<vector<int>> &m, vector<vector<bool>> &visited, int i, int j, string res)
    {
        int n = m[0].size();
        if(i == n-1 && j == n-1 && m[i][j] == 1)
        {
            visited[i][j] = 1;
            ans.push_back(res);
            return;
        }
        
        if( i<0 || j>=n || i>=n || j<0 || m[i][j] == 0 || visited[i][j] == true )
        {
            return;
        }
        
        visited[i][j] = 1;
        checkPath(m, visited, i-1, j, res.append("U"));
        res.pop_back();
        checkPath(m, visited, i, j-1, res.append("L"));
        res.pop_back();
        checkPath(m, visited, i+1, j, res.append("D"));
        res.pop_back();
        checkPath(m, visited, i, j+1, res.append("R"));
        res.pop_back();
        visited[i][j] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        
        checkPath(m, visited, 0, 0, "");
        
        if(ans.size() == 0)
            ans.push_back("-1");
            
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}