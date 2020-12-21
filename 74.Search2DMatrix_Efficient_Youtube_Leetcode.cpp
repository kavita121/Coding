//74. Search a 2D Matrix
//Leetcode ACCEPTED
//youtube solution

class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        //to check if the target value is i range of the matrix
        if(target < matrix[0][0] || target > matrix[m-1][n-1])
            return false;
        
        //using binary search O(logn)
        int low = 0, mid_element;
        long int high = m*n-1, mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            int i = mid/n, j = mid%n;
            mid_element = matrix[i][j];
            if(mid_element == target)
            {
                return true;
            }
            else if(mid_element > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};