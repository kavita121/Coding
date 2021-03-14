// GFG TLE :(
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 

class Solution {
  public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        if(n<1)
        {
            vector<int> ans;
            return ans;
        }
        
        multimap< int, int, greater<int> > schedule;
        
        for(int i=0; i<n; i++)
        {
            schedule.insert(make_pair(arr[i].profit, arr[i].dead));
        }
        
        int jobs = 0, profit = 0, time = 0;
        auto itr = schedule.begin();
        
        bool occupied[n];
        
        
        while(itr != schedule.end())
        {
            for(int i=min(n-1, itr->second-1); i>=0; i--)
            {
                if(!occupied[i])
                {
                    occupied[i] = true;
                    profit += itr->first;
                    jobs++;
                    time++;
                    break;
                }
            }
            itr++;
        }
        vector<int> ans{jobs, profit};
        return ans;
    } 
};


int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}