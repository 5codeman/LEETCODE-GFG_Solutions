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
    
    int gcd(int a, int b)
    {
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode *p = head;
        while(p->next != NULL)
        {
            ListNode* node = new ListNode(gcd(p->val, p->next->val));
            
			// storing originally next pointer in list
            ListNode *on = p->next; 
			
			// inserting node in between
            p->next = node; 
            node->next = on;
			
			// moving to next node in original list
            p = on;
        }
        
        return head;
    }
};