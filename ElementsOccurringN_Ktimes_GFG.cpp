//find all elements that appear more than n/k times
//WORKING   using hashing

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter value of k: ";
    cin>>k;
    for(int i=0; i<n; i++)
    {
        if(freq.find(arr[i]) != freq.end())
        {
            freq[arr[i]] = freq[arr[i]]+1;
        }
        else
        {
            freq.insert({arr[i], 1});
        }
    }
    for(auto itr = freq.begin(); itr!=freq.end(); itr++)
    {
        if(itr->second > (n/k))
        {
            cout<<itr->first<<" ";
        }
    }
    return 0;
}