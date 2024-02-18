#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int value;
    struct node *next;
    struct node *prev;
} node_t;

node_t *makeNode(const int value);
void printList(node_t *head);
void headInsert(node_t **head, const int value);
void nodeInsert(node_t *node, node_t *newNode);
node_t *findNode(node_t *head, const int value);
void rmNode(node_t **head, node_t *node);

#endif  // LINKEDLIST_H