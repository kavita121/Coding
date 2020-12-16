//4. Median of Two Sorted Arrays
//Leetcode ACCEPTED

class Solution {
public:
    
    vector<int> merge(vector<int> &A, vector<int> &B)
    {
        vector<int> res;
        int i=0, j=0;
        while(i<A.size() && j<B.size())
        {
            if(A[i] < B[j])
            {
                res.push_back(A[i]);
                i++;
            }
            else
            {
                res.push_back(B[j]);
                j++;
            }
        }
        while(i<A.size())
        {
            res.push_back(A[i++]);
        }
        while(j<B.size())
        {
            res.push_back(B[j++]);
        }
        return res;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> merged = merge(nums1, nums2);
        int n = merged.size();
        double res;
        if(n % 2)
        {
            int ind = n/2;
            res = (double)merged[ind];
        }
        else
        {
            int ind1 = n/2, ind2 = n/2-1;
            res = (double) (merged[ind1]+merged[ind2])/2;
            
        }
        return res;
    }
};