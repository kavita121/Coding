//Union and Intersection of two arrays
//correct for union Intersection check was not there but that's working fine too

#include<bits/stdc++.h>
#define ll long long

using namespace std;

void pushFirstCheck(vector<int> &un, vector<int> first, vector<int> second)
{
        for(int i=0; i<first.size(); )
        {
            if(!binary_search(second.begin(), second.end(), first[i]))
            {
                un.push_back(first[i]);
            }

            //inserting this loop in order to ensure that no duplicate elements get copied into the union as the array is already sorted
            int prev = first[i];
            while( first[i] == prev)
            {
                i++;
            }
        }
}

void pushFirst(vector<int> &un, vector<int> first)
{
        for(int i=0; i<first.size();)
        {
            un.push_back(first[i]);
            int prev = first[i];
            while( first[i] == prev)
            {
                i++;
            }
        }
}


void pushSecondCheck(vector<int> &un, vector<int> second, vector<int> first)
{
        for(int i=0; i<second.size();)
        {
            if(!binary_search(first.begin(), first.end(), second[i]))
            {
                un.push_back(second[i]);
            }
            int prev = second[i];
            while( second[i] == prev)
            {
                i++;
            }
        }
}

void pushSecond(vector<int> &un, vector<int> second)
{
        for(int i=0; i<second.size();)
        {
            un.push_back(second[i]);
            int prev = second[i];
            while( second[i] == prev)
            {
                i++;
            }
        }
}


//function to find the intersection of arrays
void intersectionArrays(vector<int> &inter, vector<int> first, vector<int> second)
{
    int i=0, j=0;
    while(i<first.size(), j<second.size())
    {
        if(first[i] < second[j])
            i++;
        else if(first[i] > second[j])
            j++;
        else
        {
            //case of equal
            inter.push_back(first[i]);
            i++;
            j++;
        }
        
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, x;
        cin>>n>>m;
        vector<int> first(n), second(m);
        for(int i=0; i<n; i++)
        {
            cin>>first[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>second[i];
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        vector<int> un;
        if(n < m)
        {
            //to insert the first array as it is 
            pushFirst(un, first);
            //to insert the first array while comparing with second array
            pushSecondCheck(un, second, first);
        }
        else
        {
            //to insert the secind array as it is
            pushSecond(un, second);
            //to insert the first array while comparing with first array
            pushFirstCheck(un, first, second);
        }
        vector<int> inter;
        intersectionArrays(inter, first, second);
        cout<<"Union Size: :"<<un.size()<<endl;
        cout<<"Intersection Sizze: "<<inter.size()<<endl;
    }
    return 0;
}