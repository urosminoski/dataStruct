#ifndef STACK_LINKED_LIST_H
#define STACK_LINKED_LIST_H

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int32_t     value;
    struct node *next;
} Stack;

int32_t stack_linkedList_pop(Stack **pStack);
bool stack_linkedList_push(Stack **pStack, int32_t value);

#endif //STACK_LINKED_LIST_H