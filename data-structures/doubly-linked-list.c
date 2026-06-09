#include<stdio.h>

#define dataType int

typedef struct ListNode {
    dataType data;
    struct ListNode* prev;
    struct ListNode* next;
} ListNode;

void InsertDoublyLinkedList(ListNode **head, dataType data, int position) {
    ListNode *p;
    int k=1;

    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

    if(!newNode) {
        printf("Memory error");
        return;
    }

    if(position==1) {
        newNode->prev = NULL;
        newNode->next = p;
        if(*head) (*head)->prev = newNode;
        *head = newNode;
        return;
    }
    p = *head;
    while((k < position-1) && (p->next!=NULL)) {
        p=p->next;
        k++;
    }

    if(k!=position) {
        printf("Position does not exist");
        return;
    }

    newNode->prev = p;
    newNode->next = p->next;
    
    if(p->next) p->next->prev = newNode;

    p->next = newNode;
    return;
}