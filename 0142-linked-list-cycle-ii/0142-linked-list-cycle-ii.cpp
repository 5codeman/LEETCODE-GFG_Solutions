/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<unordered_map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool>map;
        ListNode *temp = head;
        while(temp != NULL)
        {
            if(map.count(temp) == 1)
            {
                return temp;
            }
            map[temp] = true;
            temp = temp->next;
        }
        return NULL;
    }
};