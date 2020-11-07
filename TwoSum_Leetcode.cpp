//1. Two Sum Leetcode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        //maintaining a hash map in which first we just put all the elements of array mapped to their indices
        map<int, int> pairs;
        for(int i=0; i<nums.size(); i++)
        {
            pairs.insert({nums[i], i});
        }
        //in second loop checking if the complement of the number exists in the first hashmap or the given array
        for(int i=0; i<nums.size(); i++)
        {
            int comp = target-nums[i];
            auto itr = pairs.find(comp);
            //if the complement is found and it's not itself then we have the answer
            if(itr != pairs.end() && i!=itr->second)
            {
                ans.push_back(itr->second);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};