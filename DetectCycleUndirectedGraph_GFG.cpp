//Detect cycle in an undirected graph
//GFG ACCEPTED
//Graphs


#include<bits/stdc++.h>
using namespace std;



class Solution 
{
    public:
    
    bool dfs(int curr, vector<int> adj[], vector<bool> &visited, int parent)
    {
        visited[curr] = true;
        for(int i=0; i<adj[curr].size(); i++)
        {
            if( !visited[ adj[curr][i] ] )
            {
                if( dfs( adj[curr][i], adj, visited, curr ) )
                    return true;
            }
            else if( adj[curr][i] != parent )
            {
                return true;
            }
        }
        return false;
    }
    
    //Function to detect cycle in an undirected graph.
	bool isCycle(int v, vector<int>adj[])
	{
	    vector<bool> visited(v, false);
	    
	    for(int i=0; i<v; i++)
	    {
	        if(!visited[i])
	        {
	            if(dfs(i, adj, visited, -1))
	                return true;
	        }
	    }
	    
	    return false;
	}
};



int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
} 