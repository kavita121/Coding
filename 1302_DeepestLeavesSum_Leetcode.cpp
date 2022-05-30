// 1302. Deepest Leaves Sum
// Leetcode


// recursive method, first finding the depth and then the sum
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void findDepth(TreeNode *node, int &depth, int currLevel)
    {
        
        if(node == NULL)
            return;
        
        if(depth < currLevel)
            depth = currLevel;
        
        findDepth(node->left, depth, currLevel+1);
        findDepth(node->right, depth, currLevel+1);

    }
    
    void findSum(TreeNode *node, int &sum, int level, int depth)
    {
        if(node == NULL)
            return;
        
        if(level == depth)
            sum += node->val;
        
        findSum(node->left, sum, level+1, depth);        
        findSum(node->right, sum, level+1, depth);

    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        int depth = 0;
        findDepth(root, depth, 0);
        
        int sum = 0;
        findSum(root, sum, 0, depth);
        
        return sum;
    }
};


// Iterative method using level order traversal

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int sum;
        
        while(!q.empty())
        {
            sum = 0;
            
            int n = q.size();
            
            while(n--)
            {
                TreeNode *curr = q.front();
                sum += curr -> val;
                q.pop();
                
                if(curr -> left)
                    q.push(curr->left);
                
                if(curr -> right)
                    q.push(curr->right);
            }
        }
        
        return sum;
    }
};