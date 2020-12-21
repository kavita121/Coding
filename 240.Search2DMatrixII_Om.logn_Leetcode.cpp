//240. Search a 2D Matrix II
//Leetcode ACCEPTED but Inefficient
//complexity - O(m * log(n))

class Solution {
public:
    
    bool binarySearch(vector<vector<int>>& matrix, int target, int i)
    {
        int low = 0, high = matrix[0].size()-1, mid;
        
        while(low <= high)
        {
            mid = (low+ high)/2;
            if(matrix[i][mid] == target)
                return true;
            else if(matrix[i][mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        //using binary search
        
        int m = matrix.size(), n = matrix[0].size();
        int low = 0, high = m-1;
        
        for(int i=0; i<m; i++)
        {
            if(matrix[i][0] <= target && matrix[i][n-1] >= target)
                if(binarySearch(matrix, target, i))
                    return true;
        }
        
        return false;
        
    }
};