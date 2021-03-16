// Fractional Knapsack
// GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};



bool comp(Item a, Item b)
{
    return ( ((double)a.value / (double) a.weight ) > ((double)b.value / (double)b.weight) );
}

class Solution
{
    public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        multimap<double, int, greater<int>> ratio;

        //sorting the array of Item according to the ratio of value and weight
        sort(arr, arr+n, comp);
        
        int weight = 0;
        double maxVal = 0;
        
        //traversing the array of item to determine the maximum profit or value that we can get

        for(int i=0; i<n; i++)
        {
            if(weight + arr[i].weight <= W)
            {
                weight += arr[i].weight;
                maxVal += ((double)(arr[i].value) /(double) arr[i].weight) * arr[i].weight;
            }
            else
            {
                maxVal += (W-weight) * ((double)(arr[i].value) /(double) arr[i].weight);
                weight = W;
            }
        }
        
        /*
        
        This code works fine as well but the accuracy is reduced as we are finding out the ratio of value : weight and storing it in
        a new set thus some precision is lost and also it uses an auxilliary space of O(n) but the original solution or the solution above doesn;t
        use auxilliary space

        for(int i=0; i<n; i++)
        {
            ratio.insert({((double)(arr[i].value) /(double) arr[i].weight), arr[i].weight});
        }
        double maxVal = 0.0;
        int weight = 0;
        auto itr = ratio.begin();
        while(itr != ratio.end() && weight < W)
        {
            
            if(weight + itr->second <= W)
            {
                weight += itr->second;
                maxVal += itr->first * itr->second;
            }
            else
            {
                maxVal += (W-weight) * itr->first;
                weight = W;
            }
            itr++;
        }*/
        
        return maxVal;
    }
        
};



int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  