//Sort a stack
//GFG ACCEPTED
//Stack And Queue
//Solution using temporary stack

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


stack<int> tempStack;

void SortedStack :: sort()
{   
    while(s.size() > 0)
    {
        int el = s.top();
        s.pop();
        
        while(tempStack.size() > 0 && tempStack.top() > el)
        {
            s.push(tempStack.top());
            tempStack.pop();
        }
        
        tempStack.push(el);
    }
    s.swap(tempStack);
}