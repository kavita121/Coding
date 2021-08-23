//GFG ACCEPTED
//DFS Graph
//358. Graphs

class Solution 
{
    public:
    
    void dfsHelper(int i, vector<int> adj[], vector<bool> &vis, vector<int> &ans)
    {
        vis[i] = true;
        ans.push_back(i);
        
        for(int j=0; j<adj[i].size(); j++)
        {
            if(vis[adj[i][j]] == false)
                dfsHelper(adj[i][j], adj, vis, ans);
        }
    }
    
	//Function to return a list containing the DFS traversal of the graph.
	vector<int> dfsOfGraph(int v, vector<int> adj[])
	{
	    vector<int> ans;
	    
	    vector<bool> vis(v, false);
	    
	    dfsHelper(0, adj, vis, ans);
	    
	    return ans;
	}
};