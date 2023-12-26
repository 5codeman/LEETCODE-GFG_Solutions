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
    TreeNode* build_tree(vector<int>& preorder, vector<int>& inorder, int P_S, int P_E, int IN_S, int IN_E)
    {
        //BASE CASES //*****(ISPE SOCHMA )
        if(((P_E - P_S) + 1) == 0 && ((IN_E - IN_S) + 1) == 0)
        {
            return NULL;
        }
        
//         if(P_E < P_S || IN_E < IN_S)
//         {
//             return NULL;
//         }
        
        // Data for root
        int root_value = preorder[P_S];
        TreeNode*root = new TreeNode(root_value);
        int root_index_inorder;
        
        //For find left inorder end
        for(int i=IN_S; i <= IN_E; i++)
        {
            if(inorder[i] == root_value)
            {
                root_index_inorder = i;
                break;
            }
        }
        
        //Data for left
        int L_IS = IN_S;
        int L_IE = root_index_inorder - 1;
        int L_PS = P_S + 1;
        int L_PE = L_PS+ (L_IE - L_IS);
        TreeNode*Left_child = build_tree(preorder, inorder, L_PS, L_PE, L_IS, L_IE);
        root -> left = Left_child;
        
        //Data for right
        int R_PS = L_PE + 1;
        int R_PE = P_E;
        int R_IS = root_index_inorder + 1;
        int R_IE = IN_E;
        TreeNode*Right_child = build_tree(preorder, inorder, R_PS, R_PE, R_IS, R_IE);
        root -> right = Right_child;
        
        return root;     
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // **** iss Q ko banane ke lia CN mai jo banye the uska help lena pud gaya ****
        TreeNode*root = build_tree(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
        return root;
    }
};

// coplexity baad mai nikalna seekhna