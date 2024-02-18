#include <stdio.h>
#include "linkedList.h"

int main(void)
{
    printf("\r\n");

    node_t *head = NULL; 

    for(size_t i = 0; i < 20; i++) headInsert(&head, i);

    printf("Old linked list:\r\n");
    printList(head);

    node_t *foundNode = findNode(head, 10);
    if(foundNode == NULL) return 1;
    printf("Found node with value of %d\r\n", foundNode->value);

    rmNode(&head, foundNode);
    printf("New linked list:\r\n");
    printList(head);

    node_t *newNode = makeNode(76);
    foundNode = findNode(head, 15);
    nodeInsert(foundNode, newNode);
    printList(head);

    printf("\r\n");
    return 0;
}