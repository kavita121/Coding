//Min cost

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int input1, input3,size; 
    int min_cost = 0, i;
    cin>>input1;
    int input2[input1];
    for(i=0;i<input1;i++)
        cin>>input2[i];
    cin>>input3;
    multiset<int> arr;
    for( i=0; i<input1; i++ )
    {
        arr.insert(input2[i]);
    }
    i=0;
    multiset<int>::iterator itr;
    while( arr.size()>1 )
    {
        itr = arr.begin();
        int a, b;
        a = *itr;
        arr.erase(arr.lower_bound(a));
        itr++;
        b = *itr;
        arr.erase(arr.lower_bound(b));
        int sum = a+b;
        arr.insert(sum);
        min_cost += sum * input3;
    }
    cout<<min_cost;
    return 0;;
}