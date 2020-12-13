//Sherlock and the Valid String
//Hackerrank 
//ACCEPTED

#include <bits/stdc++.h>

using namespace std;

string isValid(string s) 
{
    int alpha[27] = {0};
    string ans = "YES";
    for(char ch: s)
    {
        int ind = (int) ch-'a';
        alpha[ind]++;
    }
    map<int, int> freq;
    for(int i=0; i<27; i++)
    {
        if(alpha[i])
        {
            if(freq.find(alpha[i]) == freq.end())
                freq.insert({alpha[i], 1});
            else
                freq[alpha[i]]++;   
        }
    }
    if(freq.size() > 2)
        ans = "NO";
    else if(freq.size() == 1)       //for all the same
        ans = "YES";
    else
    {
        int f1, f2, s1, s2;
        auto itr = freq.begin();
        f1 = itr->first;
        f2 = itr->second;        
        itr++;
        s1 = itr->first;
        s2 = itr->second;
        //if we'll have to change the frequency of more than one alphabets
        if(f2>1 && s2>1)
            ans = "NO";
        //if there is difference of more than one elements in the two frequencies
        //that is 1st = 4 and 2nd = 6 then we'll need to change more than one alphabet's freq
        if(abs(f1-s1) > 1)
            ans = "NO";
        //when one of the alphabet has 1 as frequency then it can be easily removed
        if(abs(f1-s1) > 1 && (freq[1] == 1))
            ans = "YES";
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<isValid(s);
    return 0;
}
