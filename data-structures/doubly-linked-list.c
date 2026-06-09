#include<stdio.h>

#define dataType int

typedef struct ListNode {
    dataType data;
    struct ListNode* previous;
    struct ListNode* next;
} ListNode;

