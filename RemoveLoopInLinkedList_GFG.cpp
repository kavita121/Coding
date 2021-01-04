// Remove loop in Linked List
//GFG ACCEPTED

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

void removeLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}



void removeLoop(Node* head)
{
    if(head == NULL || head->next == NULL)
        return;
        
    Node *slow = head, *fast = head, *prev = head;
    
    //prev pointer points to the element previous to the current fast 
    //so when head will be the looping point we'll get the last node of linked list and thus easily remove the loop
    
    while( fast && fast->next)
    {   
        slow = slow->next;
        prev = fast->next; 
        fast = prev->next;   
        
        if(slow == fast)
        {
            //it means that the loop exists

            //starting the slow from head again
            slow = head;
            if(slow == fast)
            {
                //this means that head is the point where the ll loops so we need to deal this differnetly
                prev->next = NULL;
            }
            else
            {
                while(slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                fast->next = NULL;
            }
            break;
        }
    }   
}