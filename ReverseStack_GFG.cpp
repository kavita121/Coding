//Reversing stack using recursion

#include<bits/stdc++.h>

using namespace std;

void printStack(stack<int> st)
{
    if(st.empty())
        return;
    int temp = st.top();
    st.pop();

    cout<<temp<<" ";
    
    printStack(st);
}

void insertAtBottom(stack<int> &st, int val)
{
    if(st.empty())
    {
        st.push(val);
    }
    else
    {
        int temp = st.top();
        st.pop();

        insertAtBottom(st, val);
        st.push(temp);
    }
}
int c = 0;
void reverseStack(stack<int> &st)
{
    //using recursion
    if(st.empty())
    {
        return;
    }
    else
    {
        int temp = st.top();
        st.pop();
        c++;
        reverseStack(st);

        cout<<endl<<c<<": ";
        printStack(st);
        //inserting the value at bottom
        insertAtBottom(st, temp);
    }
}



int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //TODO : 1-2-3-4-5  ->  5-4-3-2-1

    printStack(st);

    reverseStack(st);

    cout<<"\nStack after reversing!!\n";
    printStack(st);
    
    return 0;
}