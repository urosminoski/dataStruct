
#include <stdio.h>
#include <stdbool.h>
#include "queue_linkedList.h"

int main(void)
{
    Queue_t queue1;
    queue_linkedList_init(&queue1);

    for(size_t i = 0; i < 10; i++)
    {
        int32_t val = i * 10;
        if(false == queue_linkedList_enqueue(&queue1, val)) printf("Unable to write new value to queue!\r\n");
    }

    int32_t received_val = QUEUE_EMPTY;

    for(size_t i = 0; i < 11; i++)
    {
        received_val = queue_linkedList_dequeue(&queue1);
        if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
        else printf("Received value from queue is %d\r\n", received_val);
    }

    return 0;
}