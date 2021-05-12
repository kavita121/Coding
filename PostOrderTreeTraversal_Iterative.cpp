//Postorder Tree Traversal
//Iterative solution 
//Working


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

//function for iterative postorder traversal

void postorderIterative(Node * root)
{
    stack<Node*> s;
    Node *t;
    t = root;

    s.push(t);

    stack<int> out;

    //4 2 7 8 5 6 3 1

    while(!s.empty())
    {
        t = s.top();
        out.push(t->data);
        s.pop();

        if(t->left != nullptr)
        {
            s.push(t->left);
        }
        if(t->right != nullptr)
        {
            s.push(t->right);
        }
        
    }

    while(!out.empty())
    {
        int x = out.top();
        cout<<x<<" ";
        out.pop();
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
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    postorderIterative(root);
    return 0;
}