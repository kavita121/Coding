//Find pairs with given sum in doubly linked list

void pairSum(struct Node *head, int x)
{
    Node *left, *right;
    left = head;

    while(right->next =! NULL)
    {
        right = right->next;
    }

    while(left != NULL && right != NULL && right != left && right->next != left)
    {
        if(left->data + right->data == x)
        {
            cout<<"Solution found "<<left->data<<" "<<right->data<<endl;
            left = left -> next;
            right = right -> prev;
        }
        else if(left->data + right->data > x)
        {
            right = right->prev;
        }
        else
        {
            left = left->next;
        }
    }

}