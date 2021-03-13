// N meetings in one room
// Activity election Problem
// GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int maxMeetings(int start[], int end[], int n) 
        {
            multimap<int, int> meeting;
            int maxMeet = 0;
            if(n < 1)
                return 0;
            for(int i=0; i<n; i++)
            {
                meeting.insert({end[i], start[i]});
            }
            auto itr = meeting.begin();
            int finish = itr -> first, begin = itr -> second;
            
            itr++;
            
            maxMeet++;
            
            while(itr != meeting.end())
            {
                if(itr->second > finish)
                {
                    maxMeet++;
                    finish = itr->first;
                }
                itr++;
            }
            return maxMeet;
            
        }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  