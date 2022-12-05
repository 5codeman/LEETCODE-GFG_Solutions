/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        
        // Do it by Recursive approach
        if(head->next == NULL)
        {
            return head;
        }
        
        ListNode* ans = removeNodes(head->next);
        
        if(head->val >= ans->val)
        {
            head->next = ans;
            return head;
        }
        else
        {
            head->next = NULL;
            delete head;
            return ans;
        }
        return NULL;
    }
};