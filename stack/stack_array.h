
#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <stdint.h>
#include <stdbool.h>

#define STACK_SIZE      ( (uint32_t)(0x00000008 - 0x1) )
#define STACK_EMPTY     ( ( int32_t)-1 )

int32_t stack_array_pop(int32_t *stack, uint32_t *stack_top);
bool stack_array_push(int32_t *stack, uint32_t *stack_top, int32_t value);

#endif // STACK_ARRAY_H