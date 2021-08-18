//Construct Tree from Inorder & Preorder 
//GFG ACCEPTED
//196. Binary Tree

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}



class Solution
{
    public:
    
    int pre_index = 0;
    
    Node* buildTreeHelper(int in[], int pre[], int lower, int upper, unordered_map<int, int> &m, int n)
    {
        if(lower > upper)
        {
            return NULL;
        }
        
        Node *tree = new Node(pre[pre_index++]);
        
        if(lower == upper)
            return tree;
        
        int idx = m[tree->data];
        
        tree -> left = buildTreeHelper(in, pre, lower, idx-1, m, n);
        tree -> right = buildTreeHelper(in, pre, idx+1, upper, m, n);
        
        return tree;
        
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        unordered_map<int, int> m;
        m.clear();
        for(int i=0; i<n; i++)
        {
            m.insert({in[i], i});
        }
        Node *root = buildTreeHelper(in, pre, 0, n-1, m, n);
        
        return root;
    }
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}