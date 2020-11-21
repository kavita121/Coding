//Remove duplicate element from sorted Linked List
//ACCEPTED

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
int main() 
{
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
}


Node *removeDuplicates(Node *root)
{
    Node *temp, *back;
    temp = back = root;
    int prev = temp->data;
    temp = temp->next;
    while(temp != nullptr)
    {
        int current = temp->data;
        if(current == prev)
        {
            back->next = temp->next;
            Node *toDelete = temp;
            temp = temp->next;
            free(toDelete);
        }
        else
        {
            prev = temp->data;
            temp = temp->next;
            back = back->next;
        }
    }
    return root;
}