
#ifndef QUEUE_LINKED_LIST_H
#define QUEUE_LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define QUEUE_EMPTY     ( INT32_MIN )

typedef struct node{
    int32_t     value;
    struct node *next;
} Node_t;

typedef struct{
    Node_t *head;
    Node_t *tail;
} Queue_t;

void queue_linkedList_init(Queue_t *pQueue);
bool queue_linkedList_enqueue(Queue_t *pQueue, int32_t value);
int32_t queue_linkedList_dequeue(Queue_t *pQueue);

#endif // QUEUE_LINKED_LIST_H