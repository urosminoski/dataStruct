
#include <stdio.h>
#include <stdbool.h>
#include "queue_array.h"

int main(void)
{
    Queue_t queue1;
    queue_array_init(&queue1);

    int32_t val;
    
    for(size_t i = 0; i < 4; i++)
    {
        val = i;
        if(false == queue_array_enqueue(&queue1, val)) printf("Unable to write new value to queue!\r\n");
    }

    int32_t received_val = QUEUE_EMPTY;

    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);
    
    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);
    
    // received_val = queue_array_dequeue(&queue1);
    // if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    // else printf("Received value from queue is %d\r\n", received_val);
    
    // received_val = queue_array_dequeue(&queue1);
    // if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    // else printf("Received value from queue is %d\r\n", received_val);
    
    // received_val = queue_array_dequeue(&queue1);
    // if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    // else printf("Received value from queue is %d\r\n", received_val);
     
    if(false == queue_array_enqueue(&queue1, 11)) printf("Unable to write new value to queue!\r\n");
    
    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);
     
    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);

    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);

    received_val = queue_array_dequeue(&queue1);
    if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    else printf("Received value from queue is %d\r\n", received_val);
                    

    // for(size_t i = 0; i < 5; i++)
    // {
    //     received_val = queue_array_dequeue(&queue1);
    //     if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    //     else printf("Received value from queue is %d\r\n", received_val);
    // }

    // for(size_t i = 0; i < 3; i++)
    // {
    //     val = i + 1;
    //     if(false == queue_array_enqueue(&queue1, val)) printf("Unable to write new value to queue!\r\n");
    // }

    // for(size_t i = 0; i < 5; i++)
    // {
    //     received_val = queue_array_dequeue(&queue1);
    //     if(QUEUE_EMPTY == received_val) printf("Queue is empty!\r\n");
    //     else printf("Received value from queue is %d\r\n", received_val);
    // }

    return 0;
}