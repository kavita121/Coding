/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct compare {
    bool operator()(
        struct ListNode* a, struct ListNode* b)
    {
        return a->val > b->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) 
{
    priority_queue <ListNode*, vector<ListNode*>, compare> minHeap;

    ListNode *res, *t;

    for(int i=0; i<A.size(); i++)
    {
        if( A[i] != NULL )
            minHeap.push(A[i]);
    }

    if( minHeap.empty() )
        return NULL;

    ListNode *node = new ListNode(minHeap.top() -> val);
    t = minHeap.top() -> next;
    minHeap.pop();
    if(t != NULL)
    {
        minHeap.push(t);
    }
    t = res = node;

    while( !minHeap.empty() )
    {
        ListNode *curr = minHeap.top();
        minHeap.pop(); 
        
        ListNode *node = new ListNode(curr -> val);
        t -> next = node;
        t = node;

        if(curr -> next != NULL)
            minHeap.push(curr->next);
    }

    return res;
}
