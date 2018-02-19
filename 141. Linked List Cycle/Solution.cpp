/*
    定义快指针和慢指针，快指针一次走两步，慢指针一次走一步，如果链表存在环，则快指针和慢指针的值
    就会存在某个时刻是一样的。
    
*/


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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next)
        {
            fast = fast->next;
            if(fast == slow)
            {
                return true;
            }
            if(!fast->next) return false;
            fast = fast->next;
            slow = slow->next;
        }
        return false;

    }
};
