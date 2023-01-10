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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //base cases
        
        if(p==NULL && q==NULL)
        {
            return true;
        }
        
        if(p==NULL || q==NULL)
        {
            return false;
        }
        
        //induction step
        if(p->val != q->val)
        {
            return false;
        }
        
        //hypothesis
        bool left_C= isSameTree(p->left, q->left);
        if(left_C==false)
        {
            return false;
        }
        bool right_C= isSameTree(p->right, q->right);
        if(right_C==false)
        {
            return false;
        }
        return true;  
    }
};