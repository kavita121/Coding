//26. Remove Duplicates from Sorted Array 
//Leetcode ACCEPTED

class Solution {
public:
    int removeDuplicates(vector<int>& arr) 
    {
        if(arr.size() == 0)
            return 0;
        int j, i, count = 0;
        for( i=0, j=0; i<arr.size()-1; i++)
        {
            if(arr[i] != arr[i+1])
            {
                count++;
                j++;
                arr[j] = arr[i+1];
            }
        }
        return count+1;
    }
};