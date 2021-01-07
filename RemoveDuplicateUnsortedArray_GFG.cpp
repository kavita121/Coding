// Remove duplicates from an unsorted linked list 
//GFG ACCEPTED


#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}

Node* removeDuplicates(Node *root);

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}



Node * removeDuplicates( Node *head) 
{
    
    if(head == NULL || head->next == NULL)
        return head;
    
    set<int> num;
    
    Node *t, *p;
    int i = 0;
    
    t = p = head;
    
    while(t != NULL)
    {
        if(num.find(t->data) != num.end())
        {
            p->next = t->next;
            Node * temp = t;
            t = t->next;
            free(temp);
        }
        else
        {
            num.insert(t->data);
            p = t;
            t = t->next;
        }
    }
    
    return head;
}
