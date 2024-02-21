
#include "stack_array.h"

int32_t stack_array_pop(Stack_t *stack)
{
    if(stack->top == STACK_EMPTY) return INT32_MIN;
    else return stack->values[stack->top--];
}

bool stack_array_push(Stack_t *stack, int32_t value)
{
    if(stack->top == STACK_SIZE - 1) return false;
\
    stack->values[++(stack->top)] = value;
    return true;
    
}