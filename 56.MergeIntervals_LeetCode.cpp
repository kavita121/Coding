//56. Merge Intervals LEETCODE
//ACCEPTED

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> res;
        int f;
        //Sorting Intervals matrix
        sort(intervals.begin(), intervals.end());
        cout<<intervals[0][0]<<intervals[0][1]<<endl;
        if(intervals.size() > 1)
        {
            int i, j;
            //Initialisation Of Res matrix
            if(intervals[0][1] >= intervals[1][0])
            {
                vector<int> temp{intervals[0][0], (intervals[1][1] > intervals[0][1]) ? intervals[1][1] : intervals[0][1]};
                res.push_back(temp);
                j = 2;
            }
            else
            {
                vector<int> temp{intervals[0][0], intervals[0][1]};
                res.push_back(temp);
                j = 1;
            }
            //filling the res matrix
            for(i=0; j<intervals.size(); )
            {
                //when the two intervals need to br merged
                if(res[i][1] >= intervals[j][0])
                {
                    vector<int> temp{res[i][0], (intervals[j][1] > res[i][1]) ? intervals[j][1] : res[i][1]};
                    //first removing the existing interval and pushing new interval after merging
                    res.pop_back();
                    res.push_back(temp);
                    j++;
                }
                //when we don't have to merge the intervals
                else
                {
                    vector<int> temp{intervals[j][0], intervals[j][1]};
                    res.push_back(temp);
                    i++;
                    j++;
                }
            }
        }
        else
            return intervals;
        return res;
    }
};