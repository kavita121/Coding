// 19. Remove Nth Node From End of List
// Leetcode


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(!head)
            return head;
        
        int count = 0;
        
        ListNode *temp = head;
        
        while(temp)
        {
            temp = temp->next;
            count++;
        }
        
        if(count == 1)
            return NULL;
        
        count -= n;
        
        if(count == 0)
        {
            head = head -> next;
            return head;
        }
        
        ListNode *last = head;
        
        temp = head;
        
        while(count && temp)
        {
            last = temp;
            temp = temp->next;
            count--;
        }
        
        
        if(temp && last)
        {
            last->next = temp->next;
            delete(temp);
        }
        
        return head;
    }
};