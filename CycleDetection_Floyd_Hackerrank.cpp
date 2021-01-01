//Cycle Detection
//Hackerrank ACCEPTED

bool has_cycle(SinglyLinkedListNode* head) 
{
    if(head == nullptr)
        return false;
        
    SinglyLinkedListNode *fast, *slow;
    fast = slow = head;
    while(fast && slow && fast->next)
    {
        fast = (fast->next)->next;
        slow = slow -> next;
        if(fast == slow)
        {
            return true;
        }
    } 
    return false;
}

