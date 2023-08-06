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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int length = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            length++;
        }
        
        if(length == n) // if n == length or we have to delete the first node
        {
            
            ListNode* z = head -> next;
            head -> next = NULL;
            delete head;
            head = z;
            return head;
        }
        
        int n1 = length - n;
        temp = head;
        
        for(int i = 0; i < n1 - 1; i++) temp = temp -> next;
        
        ListNode* b = temp -> next;
        temp -> next = temp -> next -> next;
        b -> next = NULL;
        delete b;
        
        return head;   
    }
};