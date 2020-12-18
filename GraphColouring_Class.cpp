//Graph Colouring Lab

#include<bits/stdc++.h>

using namespace std;

int graph[100][100];
int x[100];
int n, m;
bool possible = false;

void printSolution()
{
    possible = true;
    for(int i=0; i<n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

void NextValue(int k)
{
    while(1)
    {
        int i;
        x[k] = (x[k]+1) % (m+1);
        if(x[k] == 0)
            return;
        for(i=0; i<n; i++)
        {
            if(graph[k][i] != 0 && x[k] == x[i])
                break;
        }
        if(i == n)
            return;
    }
}

void mColouring(int k)
{
    while(1)
    {
        NextValue(k);
        if(x[k] == 0)
            return;
        if(k == n-1)
            printSolution();
        else
            mColouring(k+1);
    }
}

int main()
{
    cout<<"Enter the number of vertices: ";
    cin>>::n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>graph[i][j];
    }
    cout<<"Enter the max number of colours: ";
    cin>>m;
    for(int i=0; i<m; i++)
        x[i] = 0;
    mColouring(0);
    if(!possible)
        cout<<"No possible solutions!!";
    return 0;
}
