//Print the duplicate elements in a string
//CORRECT

#include<bits/stdc++.h>
#define ll long long
#define MAX_CHAR 256

int characters[MAX_CHAR];

using namespace std;

void countRepitition(string s)
{
    for(char ch: s)
    {
        int ind = (int) ch;
        characters[ind]++;
    }
}

int main()
{
    memset(characters, MAX_CHAR, 0);
    string s;
    cin>>s;
    countRepitition(s);
    for(int i=0; i<MAX_CHAR; i++)
    {
        if(characters[i] > 1)
            cout<<(char) i<<' ';
    }
    return 0;
}