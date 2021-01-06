// Reverse a linked list
//GFG ACCEPTED


#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


/* Function to get the middle of the linked list*/
struct Node *reverseList(struct Node *head);

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        head = reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}




struct Node* reverseList(struct Node *head)
{
    //if 0 or only 1 node in ll
    if(head == NULL || head->next == NULL)
        return head;
        
    Node *p, *q, *r;
    
    p = NULL;
    
    q = r = head;
    
    r = head->next;
    
    while(r != nullptr)
    {
        q -> next = p;
        
        p = q;
        q = r;
        r = r->next;
    }
    q->next = p;
    head = q;
    
    return head;
}
