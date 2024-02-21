
#include "queue_linkedList.h"

void queue_linkedList_init(Queue_t *pQueue)
{
    pQueue->head = NULL;
    pQueue->tail = NULL;
}

bool queue_linkedList_enqueue(Queue_t *pQueue, int32_t value)
{
    /* Check if correct pointer is passed to a function. */
    if(pQueue == NULL) return false;

    /* Make a new node. */
    Node_t *pNode = malloc(sizeof(Node_t));
    if(pNode == NULL) return false;
    pNode->value = value;
    pNode->next = NULL;

    /* Connect tail to new node. */
    if(pQueue->tail != NULL) pQueue->tail->next = pNode;
    pQueue->tail = pNode;

    /* Connect head to first added node. */
    if(pQueue->head == NULL) pQueue->head = pNode;
    
    return true;
}

int32_t queue_linkedList_dequeue(Queue_t *pQueue)
{
    /* Check if correct pointer is passed to a function. */
    if(pQueue == NULL) return QUEUE_EMPTY;

    /* Check if queue is empty. */
    if(pQueue->head == NULL) return QUEUE_EMPTY;

    /* Get value from tail node. */
    int32_t return_value = pQueue->head->value; 

    /* Remuve head node. */
    Node_t *tmpNode = pQueue->head;
    pQueue->head = pQueue->head->next;
    free(tmpNode);

    /* Check if removed node was last in queue. */
    if(pQueue->head == NULL) pQueue->tail = NULL;

    return return_value;
}