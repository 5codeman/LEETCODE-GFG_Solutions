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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*new_head = head;
        if(new_head == NULL) return NULL;
        while(new_head->next != NULL)
        {
            if(new_head->next->val == val)
            {
                ListNode*temp = new_head->next->next;
                new_head->next->next = NULL;
                delete new_head->next;
                new_head->next = temp;
            }
            
            else new_head = new_head->next;
        }
        
        if(head->val == val)
        {
            ListNode*temp = head->next;
            head->next = NULL;
            delete head;
            head = temp;
        }
        return head;
    }
};