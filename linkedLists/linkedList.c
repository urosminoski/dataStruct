#include "linkedList.h"

node_t *makeNode(const int value)
{
    node_t *node = malloc(sizeof(node_t));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void printList(node_t *head)
{
    node_t *tmpHead = head;
    while(tmpHead != NULL)
    {
        printf("%d - ", tmpHead->value);
        tmpHead = tmpHead->next;
    }
    printf("\n");
}

void headInsert(node_t **head, const int value)
{
    node_t *newNode = makeNode(value);
    if(*head != NULL)
    {
        newNode->next = *head;
        (*head)->prev = newNode;
    }
    (*head) = newNode;
}

void nodeInsert(node_t *node, node_t *newNode)
{
    newNode->next = node->next;
    newNode->prev = node;
    node->next = newNode;
}

node_t *findNode(node_t *head, const int value)
{
    node_t *tmpHead = head;
    while(tmpHead != NULL)
    {
        if(tmpHead->value == value) return tmpHead;
        tmpHead = tmpHead->next;
    }
    printf("Node with specific value isn't found!\r\n");
    return NULL;
}

void rmNode(node_t **head, node_t *node)
{
    if(*head == node)
    {
        *head = node->next;
        if(*head != NULL) (*head)->prev = NULL;
        free(node);
    }
    else
    {
        node->prev->next = node->next;
        if(node->next != NULL) node->next->prev = node->prev;
        free(node);
    }
}