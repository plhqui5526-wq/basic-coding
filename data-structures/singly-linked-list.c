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