int heightOfBT(Node *root)
{
    if(root == NULL)
        return 0;
    
    int l = heightOfBT(root->left);
    int r = heightOfBT(root->right);

    return max(r, l)+1;
}

void iterativeInorder(Node *root)
{
    stack<Node*> s;
    Node *curr = root;
    while(!q.empty() || curr != NULL)
    {
        if(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = s.top();
            cout<<curr->data;
            s.pop();
            curr = curr->right;
        }
    }
}

void iterativePeorder(Node *root)
{
    stack<Node*> s;
    Node *curr;
    s.push(root);

    while(!s.empty())
    {
        curr = s.top();
        s.pop();
        
        if(curr->right)
            s.push(curr->right);

        if(curr->left)
            s.push(curr->left);

    }
}

void iterativePostOrder(Node *root)
{
    stack<Node*> s;
    Node *curr;

    vector<int> ans;

    s.push(root);

    while(!s.empty())
    {
        curr = s.top();
        s.pop();
        ans.push_back(curr->data);
    
        if(curr->left)
            s.push(curr->left);

        if(curr->right)
            s.push(curr->right);
    }

    reverse(ans.begin(), ans.end());
    print(ans);
}