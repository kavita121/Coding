// Spirally traversing a matrix
// GFG ACCEPTED

#include <bits/stdc++.h> 
using namespace std; 


class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int row, int col) 
    {
        vector<int> res;
        int top = 0, left = 0, right = col-1, bottom = row-1;
        char dir = 'r';
        //dir:  r=right    l=left  u=up    d=down
        //dir denotes the direction in which we are currently printing or traversing or spiralling
        
        while(top<=bottom && left <= right)
        {
            if(dir == 'r')
            {
                for(int i=left; i<=right; i++)
                    res.push_back(matrix[top][i]);
                dir = 'd';
                top++;
            }
            else if(dir == 'd')
            {
                for(int i=top; i<=bottom; i++)
                    res.push_back(matrix[i][right]);
                dir = 'l';
                right--;
            }
            else if(dir == 'l')
            {
                for(int i=right; i>=left; i--)
                    res.push_back(matrix[bottom][i]);
                dir = 'u';
                bottom--;
            }
            else if(dir == 'u')
            {
                for(int i=bottom; i>=top; i--)
                    res.push_back(matrix[i][left]);
                dir = 'r';
                left++;
            }
        }
        
        return res;
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 