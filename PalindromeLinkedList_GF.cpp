// Check if Linked List is Palindrome
// GFG ACCEPTED


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}



Node* reverseLinkedList(Node *head)
{
    Node *p, *q, *r;
    p = NULL;
    q = r = head;
    r = r->next;
    while(r != NULL)
    {
        q -> next = p;
        p = q;
        q = r;
        r = r->next;
    }
    q->next = p;
    head = q;
    /*cout<<"Reversed: ";
    p = head;
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;*/
    return head;
}

//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    int count = 0, c = 0;
    Node *t;
    t = head;
    //counting the number of elements in linked list
    while(t != NULL)
    {
        count++;
        t = t->next;
    }

    // if input is single digit it must be palindrome
    if(count == 1)
        return true;
    if(count == 2)
    {
        //if the linked list is like: 2 2 then we just need to check these two elements
        t = head;
        if(t->data == (t->next)->data)
            return true;
        else
            return false;
    }
    else
    {
        c = count;
        count = count/2;
        t = head;
        int i=1;
        while(count > 0 && i <= count)
        {
            i++;
            t = t->next;
        }
        
        Node *r, *l;

        //in case 1 2 3 2 1 we just need to reverse 2 1 -> 1 2 so this case is applied
        if(c % 2 == 0)
            r = reverseLinkedList(t);
        else
            r = reverseLinkedList(t->next);
        
        l = head;
        
    //checking each element one by one
        while(r != NULL)
        {
            if(l->data != r->data)
                return false;
            l = l->next;
            r = r->next;
        }
        return true;
    }
}

