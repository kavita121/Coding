// Add 1 to a number represented as linked list 
//GFG ACCEPTED

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 

//Logic part


//function to reverse the linked list

Node * reverseLL(Node *head)
{
    if(head->next == nullptr)
        return head;
        
    Node *p, *q, *r;
    
    p = nullptr;
    q = r = head;
    r = r->next;
    
    while(r != nullptr)
    {
        q->next = p;
        p = q;
        q = r;
        r = r->next;
    }
    q->next = p;
    head = q;
    
    return head;
}


Node* addOne(Node *head) 
{
    //if there are no nodes in linked list
    if(head == nullptr)
        return head;
    
    //reversing the linked list
    head = reverseLL(head);
    
    //adding 1 to the first element int the ll
    head->data += 1;
    
    //checking for any carry in the ll
    int carry=0;
    
    int n = head->data;
    if(n > 9)
    {
        head->data = n%10;
        carry = 1;
    }
    
    if(carry)
    {
        //if carry is present we will shift it to right side one by one
        Node *t = head, *prev = head ;
        
        t = t->next;
    
        while(carry != 0 && t != nullptr)
        {
            t->data += carry;
            if(t->data > 9)
            {
                t->data = n%10;
                carry = 1;
            }
            else
                carry = 0;
                
            prev = t;
            t = t->next;
        }
        
        //in case something like: 99+1 = 100 then we need to add an extra node
        if(carry != 0)
        {
            Node *temp = new Node(carry);
            prev->next = temp;
            temp->next = nullptr;
        }
        
    }
    
    //again reversing to get the correct sequence of number in ll  
    head = reverseLL(head);
        
    return head;
}