
#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE      ( 9 )
#define STACK_EMPTY     ( -1 )

typedef struct{
    int32_t     values[STACK_SIZE];
    int32_t     top;
} Stack_t;

int32_t stack_array_pop(Stack_t *stack);
bool stack_array_push(Stack_t *stack, int32_t value);

#endif // STACK_ARRAY_H