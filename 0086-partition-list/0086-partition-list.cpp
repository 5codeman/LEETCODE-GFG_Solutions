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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* less_head = NULL;
        ListNode* less_tail = NULL;
        ListNode* greater_head = NULL;
        ListNode* greater_tail = NULL;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(temp->val < x)
            {
                if(less_head == NULL)
                {
                    less_head = temp;
                    less_tail = less_head;
                }
                else
                {
                    less_tail->next = temp;
                    less_tail = less_tail->next;
                }
                
            }
            else
            {
                if(greater_head == NULL)
                {
                    greater_head = temp;
                    greater_tail = greater_head;
                }
                else
                {
                    greater_tail->next = temp;
                    greater_tail = greater_tail->next;
                }  
            }
            
            temp = temp->next;
        }
        if(greater_tail!=NULL)
        {
            greater_tail->next = NULL;
        }
        
        if(less_head==NULL)
        {
            return greater_head;
        }
        less_tail->next = greater_head;
        return less_head;
        
    }
};