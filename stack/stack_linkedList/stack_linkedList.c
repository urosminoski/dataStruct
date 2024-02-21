
#include "stack_linkedList.h"

static Stack_t * make_node(int32_t value)
{
    Stack_t *pNode = malloc(sizeof(Stack_t));
    if(pNode != NULL)
    {
        pNode->value = value;
        pNode->next = NULL;
    }
    return pNode;
}

int32_t stack_linkedList_pop(Stack_t **pStack)
{
    /* Stack is empty */
    if(*pStack == NULL) return INT32_MIN;

    int32_t return_value = (*pStack)->value;

    Stack_t *tmpStack = *pStack; 
    *pStack = (*pStack)->next;
    free(tmpStack);
    return return_value;
}

bool stack_linkedList_push(Stack_t **pStack, int32_t value)
{
    Stack_t *pNode = make_node(value);
    if(pNode == NULL) return false;

    pNode->next = *pStack;
    *pStack = pNode;
    return true;
}