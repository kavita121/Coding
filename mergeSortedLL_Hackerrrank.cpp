#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *head, *f, *s, *res;
    f = head1;
    s = head2;
    
    if(head1 == NULL && head2 == NULL)
        return head;
    
    int first = 1;
    while(f != nullptr && s != nullptr)
    {
        int val;
        if(f->data <= s->data)
        {
            val = f->data;
            f = f->next;
        }
        else
        {
            val = s->data;
            s = s->next;
        }
        
        SinglyLinkedListNode *newNode = new SinglyLinkedListNode(val);
        if(first == 1)
        {
            res = head = newNode;   
            first = 0;
        }
        else
        {
            res->next = newNode;
            res = res->next;
        }
    }
    while(f != NULL)
    {
        SinglyLinkedListNode *newNode = new SinglyLinkedListNode(f->data);
        f = f->next;
        if(first == 1)
        {
            res = head = newNode;
            first = 0;
        }
        else
        {
            res->next = newNode;
            res = res->next;
        }  
    }
    while(s != NULL)
    {
        SinglyLinkedListNode *newNode = new SinglyLinkedListNode(s->data);
        s = s->next;
        if(first == 1)
        {
            res = head = newNode;
            first = 0;
        }
        else
        {
            res->next = newNode;
            res = res->next;
        }  
    }
    return head;
}

int main()