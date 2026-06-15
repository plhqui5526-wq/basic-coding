#include<stdio.h>

#define dataType int

typedef struct DLLNode {
    dataType data;
    struct DLLNode* prev;
    struct DLLNode* next;
} DLLNode;

void insertDLLNode(DLLNode **head, dataType data, int position) {
    int k=1;
    DLLNode *p;
    DLLNode *newNode = (DLLNode *)malloc(sizeof(DLLNode));
    
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
    while(p!=NULL && k<position-1) {
        k++;
        p=p->next;
    }

    if(p==NULL) {
        printf("Invalid position");
        free(newNode);
        return;
    }

    newNode->prev = p;
    newNode->next = p->next;

    if(p->next) p->next->prev = newNode;

    p->next = newNode;
    return;
}

void deleteDLLNode(DLLNode **head, int position) {}