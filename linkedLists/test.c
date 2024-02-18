#include <stdio.h>
#include "linkedList.h"

int main(void)
{
    node_t *head = NULL; 

    for(size_t i = 0; i < 10; i++) headInsert(&head, i);

    printf("\r\nOld linked list:\r\n");
    printList(head);

    node_t *foundNode = findNode(head, 0);
    if(foundNode == NULL) return 1;
    printf("Found node with value of %d\r\n", foundNode->value);

    rmNode(&head, foundNode);
    printf("New linked list:\r\n");
    printList(head);
    printf("\r\n");

    return 0;
}