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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *res = new ListNode;
        ListNode *lastNode = new ListNode;
        lastNode -> next = nullptr;
        lastNode = res;
        int carry=0;
        while(l1 != nullptr || l2 != nullptr)
        {
            ListNode *node = new ListNode;
            int val1 = (l1 != nullptr) ? l1 -> val :0; 
            int val2 = (l2 != nullptr) ? l2 -> val :0; 
            int sum = val1 + val2;
            sum += carry;
            node->val = sum%10;
            node->next = nullptr;
            sum /= 10;
            carry = sum;
            lastNode->next = node;
            lastNode = lastNode -> next;
            if(l1 != nullptr)  l1 =l1 -> next;
            if(l2 != nullptr)  l2 =l2 -> next;
        }
        if(carry != 0)
        {
            ListNode *node = new ListNode;
            int value = carry;
            node->val = value % 10;
            node->next = nullptr;
            lastNode -> next = node;
            lastNode = lastNode -> next;
        }
        res = res->next;
        return res;
    }
};