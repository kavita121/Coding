//Dynamic Array
//Hackerrank(15 pts)    ACCEPTED 

#include <bits/stdc++.h>

using namespace std;

 
vector<int> dynamicArray(int n, vector<vector<int>> queries) 
{
    vector<vector<int>> seqList(n, vector<int> (0));
    vector<int> res;
    int lastAnswer = 0;
    for(int i=0; i<queries.size(); i++)
    {
        int x = queries[i][1];
        int y = queries[i][2];
        int ind = (x^lastAnswer)%n;
        if(queries[i][0] == 1)
        {
            seqList[ind].push_back(y);
        }
        else
        {
            int val = seqList[ind][y];
            lastAnswer = seqList[ind][y % seqList[ind].size()];
            res.push_back(lastAnswer);
        }
    }
    return res;
}

int main()
{
    int n, q;
    vector<vector<int>> queries;
    cin>>n>>q;
    for(int i=0; i<q; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        vector<int> temp{a, b, c};
        queries.push_back(temp);     
    }
    vector<int> res = dynamicArray(n, queries);
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}