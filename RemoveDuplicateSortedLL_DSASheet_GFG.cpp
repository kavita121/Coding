//Remove duplicate element from sorted Linked List
//GFG ACCEPTED

// { Driver Code Starts
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
		Node *head = NULL;
        Node *temp = head;

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
}// } Driver Code Ends



Node *removeDuplicates(Node *root)
{
    if(root == nullptr || root->next == nullptr)
        return  root;
    
    Node *p, *q;
    p = root;
    q = root->next;
    
    
    while(q != nullptr)
    {
        if(q->data == p->data)
        {
            Node * temp = q;
            q = q->next;
            free(temp);
            p->next = q;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
    
    return root;
    
}