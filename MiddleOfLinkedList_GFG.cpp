//876. Middle of the Linked List
//LEETCODE ACCEPTED

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
    ListNode* middleNode(ListNode* head) 
    {
        if(head == NULL)
            return head;
        int size = 0;
        ListNode *temp;
        temp = head;
        while(temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        int count = 0;
        size /= 2;
        temp = head;
        while(temp != NULL && count<size)
        {
            count++;
            temp = temp->next;
        }
        return temp;
    }
};