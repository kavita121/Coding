//240. Search a 2D Matrix II
//Leetcode ACCEPTED but Inefficient
//O(m+n)

class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        //eliminating one column at a time
        
        int i = 0, j = matrix[0].size()-1;
        
        while(i < matrix.size() && j >= 0)
        {
            if(target < matrix[i][j])
                j--;
            else if(target > matrix[i][j])
                i++;
            else if(target == matrix[i][j])
                return true;
        }
        
        return false;
        
    }
};