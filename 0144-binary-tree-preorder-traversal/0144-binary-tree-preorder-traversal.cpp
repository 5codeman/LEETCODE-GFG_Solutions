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
    void traversal(TreeNode* root,vector<int>& arr)
    {
        //BC
        if(root==NULL)
        {
            return;
        }
        
        arr.push_back(root->val);
        traversal(root->left, arr);
        traversal(root->right, arr);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>arr;
        traversal(root, arr);
        return arr;
    }
};