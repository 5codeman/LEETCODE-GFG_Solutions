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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> sums;

        queue<TreeNode*> q;
        if (root != NULL) q.push(root);
        
        while (!empty(q)) 
        {
            int q_size = size(q);
            long long sum = 0;
            while (q_size != 0) 
            {
                TreeNode* node = q.front(); 
                q.pop();
                sum += node->val;
                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
                q_size--;
            }
            sums.push_back(sum);
        }


        if (size(sums) < k) return -1;
        
        sort(sums.begin(), sums.end());
        return sums[size(sums) - k];
        
    }
};