//Add two numbers represented by linked lists
//GFG  ACCEPTED
//Linked List


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}




class Solution
{
    public:
    
    //function to reverse  given linked list
    struct Node* reverseLL(struct Node* head)
    {
        struct Node *p, *q, *r;
        p = NULL;
        q = head;
        r = head->next;
        
        while(r != NULL)
        {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        return q;
    }
    
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        second = reverseLL(second);
        first = reverseLL(first);
        
        //printList(first);
        //printList(second);
        
        int carry = 0;
        
        struct Node *sum;
        
        struct Node* t1, *t2, *t3;
        
        sum = t3 = NULL;
        t1 = first;
        t2 = second;
        
        while(t1 != NULL && t2 != NULL)
        {
            int s = t1->data + t2->data;
            t1 = t1->next;
            t2 = t2->next;
            
            int x = (carry+s);
            Node* newNode = new Node(x%10);
            
            x /= 10;
            carry = x;
            
            if(sum == NULL)
            {
                sum = t3 = newNode;
            }
            else
            {
                t3->next = newNode;
                t3 = newNode;
            }
            
        }
        
        while(t1 != NULL)
        {
            int x = (carry+t1->data);
            Node* newNode = new Node(x%10);
            
            x /= 10;
            carry = x;
            
            if(sum == NULL)
            {
                sum = t3 = newNode;
            }
            else
            {
                t3->next = newNode;
                t3 = newNode;
            }
            t1 = t1->next;
        }
        
        while(t2 != NULL)
        {
            int x = (carry+t2->data);
            Node* newNode = new Node(x%10);
            
            x /= 10;
            carry = x;
            
            if(sum == NULL)
            {
                sum = t3 = newNode;
            }
            else
            {
                t3->next = newNode;
                t3 = newNode;
            }
            t2 = t2->next;
        }
        
        while(carry != 0)
        {
            Node* newNode = new Node(carry%10);
            
            carry /= 10;
            
            t3->next = newNode;
            t3 = newNode;
            
        }
        
        second = reverseLL(second);
        first = reverseLL(first);
        
        sum = reverseLL(sum);
        
        return sum;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends