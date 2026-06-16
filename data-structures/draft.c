#include<stdio.h>

#define dataType int

typedef struct DLLNode {
    dataType data;
    struct DLLNode* prev;
    struct DLLNode* next;
} DLLNode;

void insertDLLNode(DLLNode **head, dataType data, int position) {
    if(head == NULL || position < 1) {
        printf("Error: Invalid");
        return;
    }

    DLLNode *newNode = malloc(sizeof(DLLNode));
    if(newNode == NULL) {
        printf("Error: Memory allocation failed");
        return;
    }

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(position == 1) {
        newNode->next = *head;

        if(*head != NULL) {
            (*head)->prev = newNode;
        }

        *head = newNode;
        return;
    }

    DLLNode *p = *head;
    int k = 1;

    while(p != NULL && k < position - 1) {
        k++;
        p = p->next;
    }

    if(p == NULL) {
        printf("Error: Invalid position");
        free(newNode);
        return;
    }

    newNode->prev = p;
    newNode->next = p->next;

    if(p->next != NULL) {
        p->next->prev = newNode;
    }

    p->next = newNode;
}

void deleteDLLNode(DLLNode **head, int position) {
    if(head == NULL || *head == NULL || position < 1) {
        printf("Error: Invalid");
        return;
    }

    DLLNode *p = *head;
    int k = 1;

    while(p != NULL && k < position) {
        k++;
        p = p->next;
    }

    if(p == NULL) {
        printf("Error: Invalid position");
        return;
    }

    if(p->prev != NULL) {
        p->prev->next = p->next;
    } else {
        *head = p->next;
    }

    if(p->next != NULL) {
        p->next->prev = p->prev;
    }

    free(p);
}