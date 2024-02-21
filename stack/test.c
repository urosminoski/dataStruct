
#include <stdio.h>
#include "stack_array.h"

int main(void)
{
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

    return 0;
}