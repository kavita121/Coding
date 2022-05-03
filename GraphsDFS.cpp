// Graphs DFS for directed graph this also works in case of loops

#include<bits/stdc++.h>
    
using namespace std;

// recursive dfs
void DFSRec(vector<int> graph[], vector<bool> visited, int s)
{
    visited[s] = true;
    cout<<s<<" ";

    for(int g: graph[s])
    {
        if(!visited[g])
        {
            DFSRec(graph, visited, g);
        }
    }
}

// iterative dfs
void DFSIter(vector<int> graph[], int n)
{
    vector<bool> vis(n, false);

    stack<int> s;
    s.push(0);
    vis[0] = true;

    while(!s.empty())
    {
        int curr = s.top();
        s.pop();
        cout<<curr<<" ";

        for(int g: graph[curr])
        {
            if(!vis[g])
                s.push(g);
        }
    }

}

    
int main()
{
    // We're asuming that the input given to us is in the form of edges, ex: A-B, B-C, A-D
    int n, e;
    cout<<"Enter the number of nodes and edges: ";
    cin>> n >> e;
    vector<int> graph[n];
    for(int i=0; i<e; i++)
    {
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
    } 
    vector<bool> visited(n, false);

    cout<<"\nThe iterative depth first traversal is a follows: \n";
    DFSIter(graph, n);
    cout<<"\nThe recursive depth first traversal is a follows: \n";
    DFSRec(graph, visited, 0);
    
    return 0;
}