/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*temp;
        while(node->next != NULL)
        {
            node->val = node->next->val;
            if(node->next->next == NULL) temp = node; //when we have to delete the last node
            node = node->next;
        }
        temp->next = NULL;
        delete node; 
    }
};
