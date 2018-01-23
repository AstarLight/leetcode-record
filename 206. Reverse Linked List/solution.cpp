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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* p,*old_next;
        p = head;        
        while(p)
        {  
            old_next = p->next;
            p->next = pre;
            pre = p;
            p = old_next;
        }
        
        return pre;
    }
};
