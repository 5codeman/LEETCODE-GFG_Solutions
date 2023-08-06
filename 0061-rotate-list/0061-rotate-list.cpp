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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode* temp = head;
        int length = 0 ;
        
        while(temp != NULL) 
        {
            length++;
            temp = temp -> next;
        }
        
        k = k % length;
        if(k != 0)
        {
            temp = head;
            ListNode* newHead = NULL;
            for(int i = 1; i < length - k; i++)
            {
                temp = temp -> next;
            }
            newHead = temp -> next;
            temp -> next = NULL;
        
            temp = newHead;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = head;
            head = newHead;
        }
        return head;
    }
}; 