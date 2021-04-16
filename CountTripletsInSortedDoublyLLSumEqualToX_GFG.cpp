//Count triplets in a sorted doubly linked list whose sum is equal to a given value x

int countTriplets(Node *head, int x)
{
    //it means we either have 0, 1 or only 2 elements in the DLL
    if(head == NULL || head->next == NULL || (head->next)->next == NULL)
        return 0;
    
    Node *fix, *left, *right, *temp;
    int count = 0;

    //temp will store the rightmost data element
    temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    fix = head;
    while(fix != NULL)
    {
        int sum = fix->data;
        left = fix->next;
        right = temp;
        while(right != left && right != fix && left != NULL && right->next != left)
        {
            if((sum + right->data + left->data) == x)
                count++;
            else if((sum + right->data + left->data) > x)
                right = right->prev;
            else    
                left = left->next;
        }
    }

    return count;

}