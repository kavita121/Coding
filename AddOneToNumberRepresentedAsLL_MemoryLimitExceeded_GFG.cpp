// Add 1 to a number represented as linked list
//GFG Wrong answer

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




Node* addOne(Node *head) 
{
    if(head == nullptr)
        return head;
        
    long long num = 0;
    
    Node *t;
    t = head;
    
    int i=10;
    while(t != nullptr)
    {
        num = (t->data) + num*i;
        
        t = t->next;
    }
    
    num += 1;
    
    
    Node* newNode = new Node(num%10);
    newNode->next = nullptr;
    
    head = newNode;
    num /= 10;
    
    while(num > 0)
    {
        Node* newNode = new Node(num%10);
        
        newNode -> next = head;
        head = newNode;
        
        num /= 10;
    }
    
    return head;
}