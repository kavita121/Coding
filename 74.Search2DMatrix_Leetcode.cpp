//74. Search a 2D Matrix
//Leetcode ACCEPTED


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<matrix.size(); i++)
        {
            if(matrix[i][0] <= target & matrix[i][m-1] >= target)
            {
                for(int j=0; j < matrix[i].size(); j++)
                {
                    if(matrix[i][j] == target)
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};