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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode*New_Head=NULL;
        ListNode*temp;
        
        head=head->next;
        while(head!=NULL)
        {
            int sum=0;
            while(head->val!=0)
            {
                sum+=head->val;
                head=head->next;
            }
            
            if(head->val==0)
            {
                ListNode*new_node= new ListNode(sum);
                if(New_Head==NULL)
                {
                    New_Head=new_node;
                    temp=New_Head;
                }
                else
                {
                    temp->next=new_node;
                    temp=temp->next;
                }
            }
            head=head->next;
        }
        return New_Head;
    }
};