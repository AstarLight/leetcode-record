/*
给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-two-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        int jinwei = 0;
        ListNode* pre = NULL;
        while(l1!=NULL || l2!=NULL)
        {
            int v1 = 0;
            int v2 = 0;
            int v = 0;
            if(l1) v1 = l1->val;
            if(l2) v2 = l2->val;
            v = v1 + v2 + jinwei;
            if(v >= 10)
            {
                v -= 10;
                jinwei = 1;
            }
            else
            {
                jinwei = 0;
            }
            ListNode* pNode = new ListNode(v);
            if(pre != NULL)
                pre->next = pNode;
            pre = pNode;
            if(result == NULL) result = pre;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(jinwei > 0)
        {
            ListNode* pNode = new ListNode(jinwei);
            pre->next = pNode;
        }

        return result;
    }

};
