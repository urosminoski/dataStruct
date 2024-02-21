
#include <stdio.h>
#include "stack_array.h"
#include "stack_linkedList.h"

int main(void)
{
    printf("\r\n----Stack as array----\r\nStart\r\n\r\n");
    int32_t     stack[STACK_SIZE];
    uint32_t    stack_top = STACK_EMPTY;

    for(uint32_t i = 0; i < 10; i++)
    {
        if(false == stack_array_push(stack, &stack_top, i*10)) printf("Stack overflow! Couldn't push value %d to the stack!\r\n", i*10);
    }

    int32_t val = INT32_MIN;

    for(uint32_t i = 0; i < 10; i++)
    {
        val = stack_array_pop(stack, &stack_top);
        if(val != INT32_MIN) printf("Poped value -> %d\r\n", val);
        else printf("Stack is empty!\r\n");
    }
    printf("\r\nEnd\r\n\r\n");

    printf("----Stack as linked list----\r\nStart\r\n\r\n");
    Stack *pStack = NULL;

    for(uint32_t i = 0; i < 10; i++)
    {
        if(false == stack_linkedList_push(&pStack, i*10)) printf("Stack overflow! Couldn't push value %d to the stack!\r\n", i*10);
    }

    val = INT32_MIN;

    for(uint32_t i = 0; i < 14; i++)
    {
        val = stack_linkedList_pop(&pStack);
        if(val != INT32_MIN) printf("Poped value -> %d\r\n", val);
        else printf("Stack is empty!\r\n");
    }
    printf("\r\nEnd\r\n\r\n");

    return 0;
}