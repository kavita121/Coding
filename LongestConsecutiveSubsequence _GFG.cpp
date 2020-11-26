//Longest consecutive subsequence GFG
//ACCEPTED


#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);


int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}


int findLongestConseqSubseq(int arr[], int n)
{
    set<int> consecutive;
    for(int i=0; i<n; i++)
    {
        consecutive.insert(arr[i]);
    }
    int count, longest = consecutive.size()>0 ? 1 : 0;
    auto itr=consecutive.begin();
    int prev = *itr;
    count = 1;
    itr++;
    for( ; itr != consecutive.end(); itr++)
    {
        if(*itr == prev+1)
        {
            count++;
            prev = *itr;
        }
        else
        {
            if(count>longest)
                longest = count;
            count = 1;
            prev = *itr;
        }
    }
    if(count>longest)
        longest = count;
    return longest;
}