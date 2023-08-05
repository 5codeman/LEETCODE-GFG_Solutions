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
    //Defined function by me
    ListNode *iterateLL(ListNode* temp, int diff) {
        for(int i = 0; i < diff; i++) temp = temp ->next;
        return temp;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // We can also solve this q by map and n square
        int countA = 0;
        int countB = 0;
        ListNode* A = headA;
        ListNode* B = headB;
        
        //Count totel node in A LL
        while(A != NULL)
        {
            countA++;
            A = A->next;
        }
        
        //Count totel node in B LL
        while(B != NULL)
        {
            countB++;
            B = B->next;
        }
        
        int diff = abs(countA - countB);
        
        if(countA > countB) headA = iterateLL(headA, diff);
        
        else headB = iterateLL(headB, diff);
        
        while(headA != NULL && headB != NULL) //any one coditio is sufficint
        {
            if(headA == headB) return headA; // or return headB;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};