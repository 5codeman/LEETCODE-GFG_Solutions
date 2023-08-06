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
    bool isPalindrome(ListNode* head) {
        
        int len = 0;
        ListNode* temp = head;
        
        //Find length
        while(temp != NULL)
        {
            len++;
            temp = temp -> next;
        }
        
        // Rotate the half Linked list
        temp = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        for(int i = 0; i < len/2; i++)
        {
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
        
        if(len % 2 != 0) temp = temp -> next;
        
        while(temp != NULL) // or prev != NULL
        {
            if(prev -> val != temp -> val) return false;

            temp = temp -> next;
            prev = prev -> next;
        }
        return true;    
    }
};