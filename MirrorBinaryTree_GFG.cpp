//Mirror of Binary tree

#include<bits/stdc++.h>

using namespace std;

typedef struct treenode { 
    int val; 
    struct treenode* left; 
    struct treenode* right; 
} node;

node* createNode(int v)
{
    node* newNode = new node;
    newNode -> val = v;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

void inorderTraversal(node *root)
{
    if(root == NULL)
        return;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}

void mirrorify(node* root)
{
    if(root == NULL)
        return;
    else
    {
        mirrorify(root->left);
        mirrorify(root->right);
        
        node *temp = new node;

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    
}

int main()
{
    node* tree = createNode(5); 
    tree->left = createNode(3); 
    tree->right = createNode(6); 
    tree->left->left = createNode(2); 
    tree->left->right = createNode(4); 

    mirrorify(tree);
    inorderTraversal(tree);

    return 0;
}