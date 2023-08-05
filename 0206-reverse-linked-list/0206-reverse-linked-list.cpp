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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        
        ListNode* nextNode = NULL;
        ListNode* prevNode = NULL;
                
        while(head != NULL)
        {
            nextNode = head -> next;
            head -> next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};