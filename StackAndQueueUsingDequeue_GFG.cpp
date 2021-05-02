//Implement Stack and Queue using Deque

#include <bits/stdc++.h>

using namespace std;

class Stack
{
    deque<int> dq;

public:
    void push(int x)
    {
        dq.push_back(x);
    }

    int pop()
    {
        int val = dq.back();
        dq.pop_back();
        return val;
    }
    
    void display()
    {
        cout<<"Content of Stack: ";
        while(!dq.empty())
        {
            int val = dq.back();
            cout<<val<<" ";
            dq.pop_back();
        }
        cout<<endl;
    }

};

class Queue
{
    deque<int> dq;

    public:
    void push(int x)
    {
        dq.push_back(x);
    }

    int pop()
    {
        int val = dq.front();
        dq.pop_front();
        return val;
    }
    void display()
    {
        cout<<"Content of Queue: ";
        while(!dq.empty())
        {
            int val = dq.front();
            cout<<val<<" ";
            dq.pop_front();
        }
        cout<<endl;
    }
};

//not writing the main function
int main()
{
    Queue q;
    Stack s;
    cout<<"Operations on the Stack: \n";
    int ch = 1;
    while(ch == 1)
    {
        int choice = 0;
        int toInsert;
        cout<<"Do you want to push(1) or pop(2) ??";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    cin>>toInsert;
                    s.push(toInsert);
                    break;
            case 2:
                    s.pop();
                    break;
            default: 
                    cout<<"Invalid choice :("<<endl;
                    break;
        }
        cout<<"Do you want to continue?? ( yes = 1 and no = 0)\n";
        cin>>ch;
    }
    s.display();
    ch = 1;
    cout<<"Operations on the Queue: \n";
    while(ch == 1)
    {
        int choice = 0;
        int toInsert;
        cout<<"Do you want to push(1) or pop(2) ??";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    cin>>toInsert;
                    q.push(toInsert);
                    break;
            case 2:
                    q.pop();
                    break;
            default: 
                    cout<<"Invalid choice :("<<endl;
                    break;
        }
        cout<<"Do you want to continue?? ( yes = 1 and no = 0)\n";
        cin>>ch;
    }
    q.display();
    return 0;
}