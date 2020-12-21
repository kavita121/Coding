//74. Search a 2D Matrix
//Leetcode ACCEPTED

class Solution {
public:
    
    bool checkElement(vector<vector<int>>& matrix, int i, int target)
    {
        int low = 0, high = matrix[i].size(), mid;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(matrix[i][mid] == target)
                return true;
            else if(matrix[i][mid] < target )
                low = mid+1;
            else
                high = mid-1;
        }
        return false;
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int n = matrix.size();
        int m = matrix[0].size();
        //to check if the target value is i range of the matrix
        if(target < matrix[0][0] || target > matrix[n-1][m-1])
            return false;
        //using binary search O(logn)
        int low = 0, high = n, mid;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(matrix[mid][0] <= target && matrix[mid][m-1] >=target)
            {
                return checkElement(matrix, mid, target);
            }
            else if(matrix[mid][0] > target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return false;
    }
};