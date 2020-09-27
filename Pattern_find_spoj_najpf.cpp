//NAJPF - Pattern Find Spoj

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int rabin_karp(string str, string pattern, vector<int> pos)
{
    int size = pattern.size();
    int count = 0;
    
    return count;
}

void hash(string pattern)
{
    int h = 0;
    for(i=0; i<pattern.size(); i++)
    {
        h += (int) pattern[i] * pow(10,i);
    }
}

int rolling_hash(string str, int hash, int index, int size)
{
    hash -= (int)pattern[index-1];
    hash /= 10;
    hash += (int) pattern[i+size];
    return hash;
}

int main()
{
    int t, i, j;
    cin>>t;
    while(t--)
    {
        string str, pattern;
        cin>>str>>pttern;
        hash(pattern);
        int result = 0;
        vector<int> pos;
        result = rabin_karp(str, pattern, pos);
        if(result > 0)
        {     
            cout<<result<<endl;
            for(i=0 ;i<pos.size(); i++)
                cout<<pos[i]<" ";
            cout<<endl;
        }
        else
        {
            cout<<"NOT FOUND"<<endl;
        }
        
    }
    return 0;
}