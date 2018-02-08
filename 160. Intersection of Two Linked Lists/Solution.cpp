/*
  最佳方案双指针思路：遍历A,B两个链表，若到达A链表尾，则A指针指向B首部，同理若B指针指向B尾部，则B指针指向A首部，
  这使得下一次遍历pA和pB可以同时到达各自链表的尾部。时间复杂度O（n）,空间复杂度O（1）
  
  
  次优方案哈希表：建立哈希表map<int,int>，遍历链表A，记录所有地址到哈希表中，再遍历B，查询该地址是否在哈希表存在。
  时间复杂度O（n）,空间复杂度O（n）
*/







/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { //two pointers
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(!headA || !headB) return NULL;
        if(headA == headB) return headA; 
        ListNode* pA = headA;
        ListNode* pB = headB;
        while((pA->next || pB->next))
        {
            if(pA->next == NULL)
            {
                pA = headB;
            }
            else
            {
                pA = pA->next;
            }
            if(pB->next == NULL)
            {
                pB = headA;
            }
            else
            {
                pB = pB->next;
            }       
            if(pA == pB) return pA;
            
        }
        
        return NULL;       
    }
};
