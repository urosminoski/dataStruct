
#include "stack_linkedList.h"

static Stack * make_node(int32_t value)
{
    Stack *pNode = malloc(sizeof(Stack));
    if(pNode != NULL)
    {
        pNode->value = value;
        pNode->next = NULL;
    }
    return pNode;
}

int32_t stack_linkedList_pop(Stack **pStack)
{
    /* Stack is empty */
    if(*pStack == NULL) return INT32_MIN;

    int32_t return_value = (*pStack)->value;

    Stack *tmpStack = *pStack; 
    *pStack = (*pStack)->next;
    free(tmpStack);
    return return_value;
}

bool stack_linkedList_push(Stack **pStack, int32_t value)
{
    Stack *pNode = make_node(value);
    if(pNode == NULL) return false;

    pNode->next = *pStack;
    *pStack = pNode;
    return true;
}