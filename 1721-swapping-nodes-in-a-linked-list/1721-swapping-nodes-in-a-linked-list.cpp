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
    ListNode* swapNodes(ListNode* head, int k) {
        int length=0;
        ListNode* temp=head;
        //find length  
        while(temp!=NULL)
        {
            temp=temp->next;
            length++;
        }
        //find kth from start
        temp=head;
        for(int i=1;i<k;i++)
        {
            temp=temp->next;
        }
        ListNode* k_start=temp;
        int temp1=k_start->val;
        //find kth from end
        temp=head;
        for(int i=0;i<length-k;i++)
        {
            temp=temp->next;
        }
        ListNode* k_end=temp;
        k_start->val=k_end->val;
        k_end->val=temp1;
        
        return head;
    }
};