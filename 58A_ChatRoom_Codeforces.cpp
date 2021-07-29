//58 A. Chat room
//Codeforces
//ACCEPTED


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word, hello_str = "hello";
    cin>>word;

    int ind = 0;
    for(char c: word)
    {
        if(ind < hello_str.size() && c == hello_str[ind])
        {
            ind++;
        }
    }

    if(ind == hello_str.size())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}