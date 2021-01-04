//DFS Of a Graph
//CORRECT

#include<bits/stdc++.h>

using namespace std;


void dfs(int s, vector<int> graph[], bool visited[])
{
    visited[s] = true;

    cout<<s<<" ";
    for(int i=0; i < graph[s].size(); i++)
    {
        if(!visited[graph[s][i]])
        {
            dfs(graph[s][i], graph, visited);
        }
    }
}

int main()
{
    int n, e;
    cout<<"Enter the nodes and vertices of graph: ";
    cin>>n>>e;
    vector<int> graph[n];
    cout<<"Enter the edges: ";
    for(int i=0; i<e; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    cout<<"Enter the starting node of traversal: ";
    int s;
    cin>>s;
    cout<<"Depth First traversal: \n";
    
    bool visited[n] = {false};
    dfs(s, graph, visited);
    return 0;
}