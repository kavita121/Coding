#include<bits/stdc++.h>

using namespace std;

void deleteHelper(stack<int> &s, int n, int i)
{
    if(s.size() == 0 || i == n)
    {
        if(!s.empty())
            s.pop();
        return;
    }

    int val = s.top();
    s.pop();
    deleteHelper(s, n, i+1);
    s.push(val);
    return;
}


void deleteMiddle(stack<int> &s)
{
    int n = s.size();
    n = n/2;
    if(s.size() % n == 0)
        n--;

    deleteHelper(s, n, 0);
    return;
}

void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    deleteMiddle(s);

    printStack(s);
    return 0;
}