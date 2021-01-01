//Cycle Detection
//Hackerrank ACCEPTED

int const INF = -(int)INFINITY;

bool has_cycle(SinglyLinkedListNode* head) 
{
    if(head == nullptr)
        return false;
    SinglyLinkedListNode *temp;
    temp = head;
    while(temp != nullptr)
    {
        if(temp->data == INF)
            return true;
        temp->data = INF;
        temp = temp->next;
    }
    return false;
}