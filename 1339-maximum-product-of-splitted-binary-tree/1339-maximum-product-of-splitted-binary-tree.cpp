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
    pair<long long, long long> maxP(TreeNode* root, int sum)
    {
        pair<long long, long long>pr(0, 0);
        if(root == NULL)
        {
            return pr;
        }
        
        pair<long long, long long>Left = maxP(root->left, sum);
        pair<long long, long long>Right = maxP(root->right, sum);
        
        pr.first = Left.first + Right.first + root->val;
        pr. second = max(Left.second, Right.second);
        pr.second = max(pr.second, pr.first * (sum - pr.first));
        
        return pr;
    }
    int Tree_sum(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int L_sum = Tree_sum(root->left);
        int R_sum = Tree_sum(root->right);
        return root->val + L_sum + R_sum;
    }
    int maxProduct(TreeNode* root) {
        int sum = Tree_sum(root);
        return maxP(root, sum).second % 1000000007;
    }
};