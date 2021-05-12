//Preorder Tree Traversal
//Iterative Solution


#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

typedef struct Node Node;

//function for iterative preorder traversal

void preorderIterative(Node * root)
{
    Node * t = root;
    stack<Node*> s;


    while(!s.empty() || t != NULL)
    {
        if(t != nullptr)
        {
            s.push(t);
            cout<<t->data<<" ";
            t = t->left;
        }
        else
        {
            t = s.top();
            s.pop();
            t = t->right;
        }
    }
}

int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4       5       6
         \     / \
          9   /   \
             7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->right = new Node(9);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorderIterative(root);
    return 0;
}