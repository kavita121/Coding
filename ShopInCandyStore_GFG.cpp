// Shop in Candy Store 
// GFG ACCEPTED

#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        //sorting the array
        sort(candies, candies+N);
        int n = N;
        int minCost = 0, maxCost = 0;

        //1 2 3 4 5
        
        //first of all finding out the minimum cost and at each iteration we remove the last k elements from traversal scope
        for(int i=0; i<n; i++)
        {
            minCost += candies[i];
            n -= k;
        }
        
        //now finding out the maximum cost and at each iteration we remove the initial k elements from traversal scope
        int left = 0;
        for(int i=N-1; i>=left; i--)
        {
            maxCost += candies[i];
            left += k;
        }
        
        vector<int > ans{minCost, maxCost};
        return ans;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  