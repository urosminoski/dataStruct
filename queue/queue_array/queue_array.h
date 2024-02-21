
#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define QUEUE_EMPTY     ( INT32_MIN )
#define QUEUE_SIZE      ( 4 )

typedef struct{
    int32_t     buff[QUEUE_SIZE];
    uint32_t    head;
    uint32_t    tail;
    uint32_t    cnt;
} Queue_t;

void queue_array_init(Queue_t *pQueue);
bool queue_array_enqueue(Queue_t *pQueue, int32_t value);
int32_t queue_array_dequeue(Queue_t *pQueue);

#endif // QUEUE_ARRAY_H