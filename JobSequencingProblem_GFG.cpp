// Job Sequencing Problem
// GFG ACCEPTED
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits

#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 



//the condition to sort the Job array
bool mycmp(Job a, Job b)
{
    return a.profit > b.profit;
}

class Solution {
  public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        if(n<1)
        {
            vector<int> ans;
            return ans;
        }
        
        
        int maxDead = -1;
        
        sort(arr, arr+n, mycmp);
        
        
        int jobs = 0, profit = 0;
        
        //finding the max
        for(int i=0; i<n; i++)
        {
            maxDead = max(maxDead,arr[i].dead);
        }
        
        bool occupied[maxDead];
        
        
        for(int j=0; j<n; j++)
        {
            for(int i = arr[j].dead-1; i>=0; i--)
            {
                if(!occupied[i])
                {
                    occupied[i] = true;
                    profit += arr[j].profit;
                    jobs++;
                    break;
                }
            }
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
