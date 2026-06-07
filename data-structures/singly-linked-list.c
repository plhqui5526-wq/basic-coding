#include<stdio.h>

#define dataType int

typedef struct ListNode {
    dataType data;
    struct ListNode* next;
} ListNode;

int length(ListNode *head) {
    ListNode *current;
    current = head;

    int count=0;

    while(current!=NULL) {
        count++;
        
        current = current->next;
    }

    return count;
}

void InsertSinglyLinkedList(ListNode **head, dataType data, int position) {
    ListNode *p, *q, *current, *newNode;
    newNode = (ListNode *)malloc(sizeof(ListNode));
    int k=1;

    if(!newNode) {
        printf("Memory error");
        return;
    }

    newNode->data = data;
    p = *head;

    if(position==1) {
        newNode->next = p;
        (*head)->next = newNode;
    } else {
        while((p!=NULL) && (k < position)) {
            k++;
            q=p;
            p=p->next;
        }
        newNode->next = q->next;
        q->next = newNode;
    }
}

void DeleteSinglyNode(ListNode **head, int position) {
    ListNode *p, *q;
    p = *head;
    int k = 1;

    if(*head==NULL) {
        printf("The list is empty");
        return;
    }

    if(position==1) {
        (*head) = (*head)->next;
        free(p);
        return;
    } else {
        while((p!=NULL) && (k<position)) {
            k++;
            q=p;
            p=p->next;
        }

        if(p!=NULL) {
            q->next = p->next;
            free(p);
        } else printf("Position does not exist");
    }
}