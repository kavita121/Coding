// Special Stack
// GFG ACCEPTED


#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);

//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}


int size = 0;

void push(stack<int>& s, int a)
{
    s.push(a);
    size++;
}

bool isFull(stack<int>& s,int n)
{
    if(size == n)
        return true;
    else
        return false;
}

bool isEmpty(stack<int>& s)
{
    if(s.empty())
        return true;
    else
        return false;
}

int pop(stack<int>& s)
{
    size--;
    int a = s.top();
    s.pop();
    return a;
}

int getMin(stack<int>& s)
{
    int min = 1e9;
    int vec[10000];
    int count = 0;
    int i=0;
    while(!s.empty())
    {
        count++;
        int t = s.top();
        vec[i] = t;
        s.pop();
        if(t < min)
        {
            min = t;
        }
    }
    for(i=count-1; i>=0; i--)
    {
        s.push(vec[i]);
    }
    return min;
}
