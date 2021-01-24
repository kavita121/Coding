//Rotate a matrix by 90 degree in clockwise direction without using any extra space
//GFG working

#include<bits/stdc++.h>

using namespace std;

//00 01 02 03
//10 11 12 13
//20 21 22 23
//30 31 32 33


int main()
{
    int n;
    cin>>n;
    int mat[100][100];
    
    //taking input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> mat[i][j];
    }

    
    //rotating the matrix
    
    
    //first finding out the transpose of matrix
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    

    for(int i=0, k=n-1; i<n/2; i++, k--)
    {
        for(int j=0; j<n; j++)
        {
            swap(mat[j][i], mat[j][k]);
        }
    }

    //printing rotated matrix
    cout<<"Rotated:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    


    return 0;
}