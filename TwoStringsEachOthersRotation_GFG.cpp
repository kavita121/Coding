//A Program to check if strings are rotations of each other or not
//CORRECT

#include<bits/stdc++.h>

using namespace std;

//mathod1
bool checkIfRotated(string s1, string s2)
{
    string temp = s2+s2;
    return (temp.find(s1) != string::npos);
}

//method1
bool checkIfRotated(string s1, string s2)
{
    if(s1.size() != s2.size())
        return false;
    int n = s1.size(), start = -1;
    for(int i=0; i<n; i++)
    {
        if(s1[0] == s2[i])
        {
            start = i;
            break;
        }
    }
    if(start == -1)
        return false;
    for(int i=0, j= start; i<n; i++, j = (j+1)%n)
    {
        if(s1[i] != s2[j])
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(checkIfRotated(s1, s2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
