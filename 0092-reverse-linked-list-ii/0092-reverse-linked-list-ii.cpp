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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // do this question with Good approach using Linked list, till i will do this q by array
        vector<int>ans;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        
        int i = left-1;
        int j = right-1;
        while(i < j)
        {
            // swap
            int temp = ans[i];
            ans[i] = ans[j];
            ans[j] = temp;
            i++;
            j--;
        }
        
        temp = head;
        for(int i=0; i<ans.size(); i++)
        {
           temp->val = ans[i];
           temp = temp->next;
        }
        return head;
    }
};