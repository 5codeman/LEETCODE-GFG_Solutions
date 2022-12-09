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
    int ftn(TreeNode* root, int max_node, int min_node)
    {
        if(root == NULL)
        {
            return max_node - min_node;
        }
        
        min_node = min(root->val, min_node);
        max_node = max(root->val, max_node);
        int L_max = ftn(root->left, max_node, min_node);
        int R_max = ftn(root->right, max_node, min_node);
        
        return max(L_max, R_max);
        
    }
    int maxAncestorDiff(TreeNode* root) {
        return ftn(root, 0, INT_MAX);
    }
};