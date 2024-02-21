
#include "stack_array.h"

int32_t stack_array_pop(int32_t *stack, uint32_t *stack_top)
{
    if(*stack_top == STACK_EMPTY) return INT32_MIN;
    else return stack[(*stack_top)--];
}

bool stack_array_push(int32_t *stack, uint32_t *stack_top, int32_t value)
{
    
    if(*stack_top == STACK_SIZE)
    {
        return false;
    } 
    else
    {
        stack[++(*stack_top)] = value;
        return true;
    }
}