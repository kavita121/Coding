//Greedy Algorithm to find Minimum number of Coins
//GFG CORRECT as per greedy

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    // 1, 2, 5, 10, 20, 50, 100, 500, 1000 => Available coins
    vector<int> coins{1000, 500, 100, 50, 20, 10, 5, 2, 1};

    int minCoin = 0;

    cout<<"Coins: ";
    for(int i=0; i<coins.size(); i++)
    {
        while(coins[i] <= n)
        {
            minCoin++;
            cout<<coins[i]<<" ";
            n -= coins[i];
        }
    }

    cout<<"\nMinimum number of coins: "<<minCoin;

    return 0;
}