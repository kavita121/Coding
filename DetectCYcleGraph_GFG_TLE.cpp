// Detect Cycle in a Graph
// TLE GFG

#include<bits/stdc++.h>
using namespace std;


class Solution{
    
	public:
	
	bool isCyclicUtil(vector<int> graph[], vector<bool> visited, int curr)
	{
	    visited[curr] = true;
	    
	    for(int i: graph[curr])
	    {
	        if(visited[i] == false)
	        {
	            visited[i] = true;
	            if(isCyclicUtil( graph, visited, i))
	                return true;
	        }
	        else
	            return true;
	    }
	    
	    visited[curr] = false;
	    return false;
	}
	
	
	bool isCyclic(int n, vector<int> graph[])
	{
	    vector<bool> visited(n, false);
	    
	    
	    for(int i=0; i<n; i++)
	    {
	        if( visited[i] == false && isCyclicUtil(graph, visited, i) )
	            return true;
	    }
        return false;
	}

};


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int n, m;
    	cin >> n >> m;

    	vector<int> adj[n];

    	for(int i = 0; i < m; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(n, adj) << "\n";
    }

    return 0;
}