//BFS of a graph

#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends


vector <int> bfs(vector<int> g[], int n) 
{
    vector<int> ans;
    queue<int> q;
    bool visited[n]={false};
    
    q.push(0);
    visited[0] = true;
    
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        
        ans.push_back(curr);
        
        for(int i=0; i<g[curr].size(); i++)
        {
            if(visited[g[curr][i]] == false)
            {
                q.push(g[curr][i]);
                visited[g[curr][i]] = true;
            }
        }
    }
    return ans;
}