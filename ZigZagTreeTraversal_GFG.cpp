// ZigZag Tree Traversal
// GFG ACCEPTED
// 188. Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

vector <int> zigZagTraversal(Node* root);

int main()
{
    int t;
    scanf("%d ",&t);
  while (t--)
  {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
        vector <int> res = zigZagTraversal(root);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout<<endl;
  }
  return 0;
}




//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
    vector<int> ans;
    
    stack<Node*> s1, s2;
    
    Node *curr = NULL;
    
    char dir = 'r';
    s2.push(root);
    
    while(!s2.empty())
    {
        int n = s2.size();
        
        
        for(int i=1; i<=n; i++)
        {
            
            curr = s2.top();
            s2.pop();
        
            ans.push_back(curr->data);
            
            if(dir == 'r')
            {
                
                if(curr->left)
                    s1.push(curr->left);
            
                if(curr->right)
                    s1.push(curr->right);
                    
            
            }
            else if(dir == 'l')
            {
                
                if(curr->right)
                    s1.push(curr->right);
                
                if(curr->left)
                    s1.push(curr->left);
                    
                
            }
            
        }
        
        if(dir == 'l')
            dir = 'r';
        else
            dir = 'l';
            
        swap(s1, s2);
        
        
    }
    
    return ans;
}