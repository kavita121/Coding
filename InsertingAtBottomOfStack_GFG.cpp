//Inserting at the bottom of stack

#include<bits/stdc++.h>

using namespace std;

void pushAtBottom(int a, stack<int> &st)
{
    //using recursion
    if(st.empty())
    {
        st.push(a);
    }
    else
    {
        int temp = st.top();
        st.pop();
        pushAtBottom(a, st);

        st.push(temp);
    }
}

void printStack(stack<int> st)
{
    if(st.empty())
        return;
    int temp = st.top();
    st.pop();

    printStack(st);

    cout<<temp<<" ";
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //TODO : push 1 at the bottom os stack to make: 2-3-4-5 as 1-2-3-4-5

    pushAtBottom(1, st);

    cout<<"Stack after insertion!!\n";
    printStack(st);
    
    return 0;
}