//Print all subsequences of a string
//GFG Using Recursion 
//Working

#include<bits/stdc++.h>

using namespace std;

vector<string> findAllSubSeq(string str)
{
    vector<string> toReturn;
    if(str.length() == 0)
    {
        vector<string> seq{""};
        return seq;
    }

    char ch = str[0];
    string sub = str.substr(1);
    vector<string> res = findAllSubSeq(sub);

    for(auto x: res)
    {
        toReturn.push_back(""+x);
        toReturn.push_back(ch+x);
    }
    return toReturn;

}

void printAllSubSeq(string str, string ans)
{
    if(str.size() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string sub = str.substr(1);
    printAllSubSeq(sub, ans+ch);
    printAllSubSeq(sub, ans+"");

}

int main()
{
    string str;
    cin>>str;
    vector<string> subseq;
    subseq = findAllSubSeq(str);
    cout<<"All the subsequences are: \n";
    for(string x: subseq)
    {
        cout<<x<<endl;
    }
    cout<<"\nPrinting without storing:\n";
    printAllSubSeq(str, "");
    return 0;
}