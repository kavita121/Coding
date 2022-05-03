// Graphs BFS for directed graph this also works in case of loops

#include<bits/stdc++.h>
    
using namespace std;
    
void BFS(vector<int> graph[], int n)
{
    queue<int> q;
    q.push(0);

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        cout<<curr<<" ";

        for(int g: graph[curr])
        {
            q.push(g);
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

    cout << "\nThe breadth first traversal is as follows:\n";
    BFS(graph, n);
    
    return 0;
}