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
    newNode->data = data;
    if(position==1) {
        newNode->prev = NULL;
        newNode->next = *head;
        if(*head) (*head)->prev = newNode;
        *head = newNode;
        return;
    }
    p = *head;
    while((k < position-1) && (p!=NULL)) {
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

void DeleteDoublyLinkedList(ListNode **head, int position) {
    ListNode *p, *q;
    int k=1;

    if(*head == NULL) {
        printf("The list is empty");
        return;
    }

    p=*head;

    if(position==1) {
        *head = (*head)->next;

        if(*head != NULL) {
            (*head)->prev = NULL;
        }
        free(p);
        return;
    }
        
    
    while((p!=NULL) && (k<position)) {
            k++;
            q=p;
            p=p->next;
    }

    if(k!=position) {
        printf("The position does not exist");
        return;
    }

    q->next = p->next;
    if(p->next) p->next->prev = q;

    free(p);
    return;
}