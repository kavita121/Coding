// Connected components count in a graph
// working

#include<bits/stdc++.h>
    
using namespace std;

void dfs(int curr, vector<int> graph[], vector<bool> &visited)
{
    visited[curr] = true;

    for(int n: graph[curr])
    {
        if(!visited[n])
        {
            dfs(n, graph, visited);
        }
    }
}


int connectedComponentsCount(vector<int> graph[], int n)
{
    int count = 0; 
  
    vector<bool> visited(n, false);
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            count++;
            dfs(i, graph, visited);
        }
    }   

    return count;
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
        graph[b].push_back(a);
    } 
    
    cout<<"Connected components are: "<<connectedComponentsCount(graph, n);

    return 0;
}