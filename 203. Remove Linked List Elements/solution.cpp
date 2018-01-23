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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p = head;
        ListNode* pre =NULL;
        while(p)
        {
            if(p->val == val)
            {
                if(p == head)
                {
                    head = head->next;
                    p = head;
                    continue;
                }
                pre->next = p->next;
                p = pre->next;
            }
            else
            {
                pre = p;
                p = p->next;                
            }
        }
        return head;
        
    }
};
