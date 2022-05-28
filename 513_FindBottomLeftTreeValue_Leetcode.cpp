// 513. Find Bottom Left Tree Value
// Leetcode

class Solution {
public:
    
    void bottomLeftFinder(TreeNode *node, int &level, int currLevel, int &value)
    {        

        if(node == NULL)
            return;

        
        if(currLevel > level)
        {
            level = currLevel;
            value = node->val;
            
        }
        
        bottomLeftFinder(node->left, level, currLevel+1, value);
        bottomLeftFinder(node->right, level, currLevel+1, value);

    }
    
    int findBottomLeftValue(TreeNode* root) {
        
        int level = -1, value = -1;
        bottomLeftFinder(root, level, 0, value);
        
        return value;
    }
};