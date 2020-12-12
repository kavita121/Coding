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

void mirrorify(node* root, node* mirror)
{
    if(root == NULL)
        return;
    else
    {
        cout<<root->val<<"\n";

        if(root->right != NULL)
            mirror->left = createNode(root->right->val);
        if(root->left != NULL)
            mirror->right = createNode(root->left->val);

        mirrorify(root->left, mirror->right);
        mirrorify(root->right, mirror->left);


    }
    
}

int main()
{
    node* tree = createNode(5); 
    tree->left = createNode(3); 
    tree->right = createNode(6); 
    tree->left->left = createNode(2); 
    tree->left->right = createNode(4); 

    node *mirror = createNode(tree->val);

    mirrorify( tree, mirror);
    inorderTraversal(mirror);

    return 0;
}