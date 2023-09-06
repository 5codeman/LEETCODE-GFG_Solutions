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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Find  Length of LL
        ListNode* temp = head;
        int Length = 0;
        vector<ListNode*> arr;
        while(temp != NULL)
        {
            Length++;
            temp = temp->next;
        }
        temp = head;
        if(Length < k)
        {
            for(int i=0; i<k; i++)
            {
                if(i < Length)
                {
                    ListNode*head2 = temp->next;
                    temp->next = NULL;
                    arr.push_back(temp);
                    temp = head2;
                }
                else
                {
                    arr.push_back(NULL);
                }
            }
        }
        
        else
        {
            int part = Length/k;
            int left = Length % k;
            ListNode*prev = NULL;
            while(temp != NULL)
            {
                arr.push_back(temp);
                for(int i=0; i<part; i++)
                {
                    prev = temp;
                    temp = temp->next;
                }
                
                if(left != 0)
                {
                    prev = temp;
                    temp = temp->next;
                    left--;
                }
                prev -> next = NULL;
            }            
        }
        return arr;
    }
};