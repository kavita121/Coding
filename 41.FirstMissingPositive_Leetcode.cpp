class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {    
        int ans = 0;
        
        set<int> s;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            s.insert(nums[i]);
        }
        
        bool flag = false;
        
        if(s.find(1) == s.end())
        {
            ans = 1;
        }
        else
        {
            auto itr = s.begin();
            int prev = *itr;
            itr++;
            for(; itr != s.end(); itr++)
            {
                if( *itr != prev+1 && prev >= 0)
                {
                    flag = true;
                    ans = prev+1;
                    break;
                }
                prev = *itr;
            }
        
            if(itr == s.end())
            {
                ans = prev+1;
            }
        }
        
        
        
        return ans;
    }
};