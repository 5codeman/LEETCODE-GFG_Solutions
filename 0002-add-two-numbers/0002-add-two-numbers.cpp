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

//chirag code(revise this code)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode*h1 = NULL;
        ListNode*t1 = NULL;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            int sum = 0;
            ListNode* node = new ListNode();
            sum = (temp1 -> val + temp2 -> val) + carry;
            
            if(sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            
            else carry = 0;
            
            if(h1 == NULL)
            {
               h1 = node;
               h1 -> val = sum;
               t1 = node;
            }
            else
            {
                t1 -> next = node;
                t1 = t1 -> next;
                t1 -> val = sum;
            }
          temp1 = temp1 -> next;
          temp2 = temp2 -> next;
        }
        
        while(temp1 != NULL) //add rest temp1 if temp 2 point to null
        {
            int sum = 0;
            ListNode* node = new ListNode();
            sum = (temp1 -> val) + carry;
            
            if(sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            
            else carry = 0;

            t1 -> next = node;
            t1 = t1 -> next;
            t1 -> val = sum;
            
          temp1 = temp1 -> next;
        }
        
        while(temp2 != NULL) //add rest temp1 if temp 1 point to null
        {
            int sum = 0;
            ListNode*node = new ListNode();
            sum = (temp2 -> val) + carry;
            
            if(sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            
            else carry = 0;

            t1 -> next = node;
            t1 = t1 -> next;
            t1 -> val = sum;
            
          temp2 = temp2 -> next;
        }
        
        if(carry > 0) //if in last carry left then
        {
            ListNode* node = new ListNode();
            t1 -> next = node;
            t1 = t1 -> next;
            t1 -> val = carry;           
        }
        return h1;        
    }
};