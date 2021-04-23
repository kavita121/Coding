//Sort a stack
//GFG ACCEPTED
//Stack And Queue
//Solution using recursion time = O(n^2) && space = O(n) - because of recursion


#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}


void insertInStack(int t, stack<int> &s)
{
    if(s.size() == 0 || s.top()<t)
    {
        s.push(t);
        return;
    }
    int temp = s.top();
    s.pop();
    insertInStack(t, s);
    s.push(temp);
}

void SortedStack :: sort()
{
    if(s.size() > 0)
    {
        int t = s.top();
        s.pop();
        sort();
        insertInStack(t, s);
    }
}