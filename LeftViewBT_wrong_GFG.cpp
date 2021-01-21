// Left View of Binary Tree
//GFG Wrong


#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> leftView(struct Node *root);

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


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

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

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
            currNode->left = newNode(stoi(currVal));

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
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = leftView(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}




vector<int> leftView(Node *root)
{
    vector<int> ans;
 
    if(root == nullptr)
        return ans;
        
    Node *t, *sibling;
    int sib_lvl=0, curr_lvl=0;
    
    sibling = nullptr;
    t = root;
    ans.push_back(t->data);
    
    while(t != nullptr)
    {
        
        if(t->left != nullptr)
        {
            curr_lvl++;
            
            if(t->right != nullptr)
            {
                if((t->right)->left != nullptr || (t->right)->right != nullptr)
                {
                    sib_lvl = curr_lvl;
                    sibling = t->right;
                }
            }
            else
                sibling = nullptr;
              
            t = t->left;
            ans.push_back(t->data);
            
        }
        else if(t->right != nullptr)
        {
            curr_lvl++;
            t=t->right;
            sibling = nullptr;
            ans.push_back(t->data);
        }
        //in case the right subtree has some child
        else if(sibling != nullptr && sib_lvl == curr_lvl)
        {
                t = sibling;
                sibling = nullptr;
        }
        else 
            t = nullptr;
        
    }
    
    return ans;
}
