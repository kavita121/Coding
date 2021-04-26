//Common elements in all rows of a given matrix
//Matrix section        CORRECT answer
//O(n*m) - time     
//O(n)-space

#include<bits/stdc++.h>

using namespace std;

/*
input:
4 5
1 2 1 4 8
3 7 8 5 1
8 7 7 3 1
8 1 2 7 9
*/

int main()
{
    int n, m;
    cin>>n>>m;
    int mat[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>mat[i][j];
    }

    map<int, int, greater<int>> count;

    for(int i=0; i<m; i++)
    {
        count.insert({mat[0][i], 1});
    }

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(count.find(mat[i][j]) != count.end() && count[mat[i][j]] == i)
            {
                count[mat[i][j]]++;
            }
        }
    }

    bool found = 0;
    for(auto itr = count.begin(); itr != count.end(); itr++)
    {
        //cout<<itr->first<<" "<<itr->second<<endl;
        if(itr->second == n)
        {
            cout<<itr->first<<" ";
            found = 1;
        }
    }

    if(!found)
        cout<<-1;
    
    return 0;
}