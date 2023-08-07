/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// we can also do by o(n) (but uska proove samghna aache se fir karna, sont solve without watching video)

// and try to solve by my approach find k length and then think how solve
#include<unordered_map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> map;
        ListNode *temp = head;
        while(temp != NULL)
        {
            if(map.count(temp) == 1) return temp;
            map[temp] = true;
            temp = temp -> next;
        }
        return NULL;
    }
};