//n queen problem backtracking

//CORRECT SOLUTION Coding Blocks: https://www.youtube.com/watch?v=jFwREev_yvU

#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isSafe(int board[][10], int i, int j, int n)
{
    //checking column
    for(int x=0; x<i; x++)
    {
        if(board[x][j]==1)
            return false;
    }
    //backward diagonal
    for(int a=i, b=j; i>=0 && b>=0; a--, b--)
    {
        if(board[a][b] == 1)
            return false;
    }
    //forward diagonal
    for(int a=i, b=j; a>=0 && b<n; a--, b++)
    {
        if(board[a][b] == 1)
            return false;
    }
    return true;
}

bool solve_n_queen(int (*board)[10], int i, int n)
{
    if(i==n)
    {
        cout<<"Solution Found!!\n";
        //it means we have got a solution
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(board[j][k] == 1)
                {
                    cout<<"Q ";
                }
                else
                {
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    
    for(int j=0; j<n; j++)
    {
        if(isSafe(board, i, j, n))
        {
            board[i][j] = 1;
            bool nextQueenPossible = solve_n_queen(board, i+1, n);
            if(nextQueenPossible)
            {
                return true;
            }
            //could not place the queen in next row
            board[i][j] = 0;        //backtrack
        }
    }
    return false;
    
}

int main()
{
    int n;
    cin>>n;
    int board[10][10];
    solve_n_queen(board, 0, n);
    return 0;
}