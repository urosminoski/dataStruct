
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int32_t 	value;
	struct node *left;
	struct node *right;
} tree_node_t;

tree_node_t * binary_tree_makeNode(int32_t value);
bool binary_tree_insert(tree_node_t **tree_root, int32_t value);
void binary_tree_print(tree_node_t *tree_root);
bool binary_tree_search(tree_node_t *tree_root, int32_t value);

#endif // BINARY_SEARCH_TREE_H
