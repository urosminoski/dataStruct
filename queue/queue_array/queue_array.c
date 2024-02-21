
#include "queue_array.h"

void queue_array_init(Queue_t *pQueue)
{
    pQueue->head = 0;
    pQueue->tail = 0;
    pQueue->cnt = 0;
}


bool queue_array_enqueue(Queue_t *pQueue, int32_t value)
{
    /* Check if passed pointer is correct. */
    if(pQueue == NULL) return false;

    /* Check if queue is full. */
    if(pQueue->cnt == QUEUE_SIZE) return false;

    /* Add new value to queue. */
    (pQueue->buff)[pQueue->tail] = value;
    pQueue->tail = (pQueue->tail + 1) % QUEUE_SIZE;
    pQueue->cnt++;

    return true;
}

int32_t queue_array_dequeue(Queue_t *pQueue)
{
    /* Check if passed pointer is correct. */
    if(pQueue == NULL) return QUEUE_EMPTY;

    /* Check if queue is empty. */
    if(pQueue->cnt == 0) return QUEUE_EMPTY;

    /* Return first added value from queue. */
    int32_t return_value = pQueue->buff[pQueue->head];
    pQueue->cnt--;
    pQueue->head = (pQueue->head + 1) % QUEUE_SIZE;
    return return_value;
}
