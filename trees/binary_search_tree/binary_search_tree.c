
#include "binary_search_tree.h"

tree_node_t * binary_tree_makeNode(int32_t value)
{
	/* Allocate memory for new node.  */
	tree_node_t *pNode = malloc(sizeof(tree_node_t));
	if(pNode != NULL) 
	{
		pNode->value = value;
		pNode->left	 = NULL;
		pNode->right = NULL;
	}
	return pNode;
}

static void print_tabs(uint16_t level)
{
	for(uint16_t i = 0; i < level; i++)
	{
		printf("\t");
	}
}

static void print(tree_node_t *tree_root, uint16_t level)
{
	if(tree_root == NULL)
	{
		print_tabs(level);
		printf("---<empty>---\r\n");
		return;
	}

	print_tabs(level);
	printf("value = %d\r\n", tree_root->value);
	
	print_tabs(level);
	printf("Left:\r\n");
	print(tree_root->left, level + 1);
	
	print_tabs(level);
	printf("Rignt:\r\n");
	print(tree_root->right, level + 1);

	print_tabs(level);
	printf("Done\r\n");
}

void binary_tree_print(tree_node_t *tree_root)
{
	print(tree_root, 0);
}

bool binary_tree_insert(tree_node_t **tree_root, int32_t value)
{
	/* Check if root is empty. */
	if(*tree_root == NULL)
	{
		*tree_root = binary_tree_makeNode(value);
		return true;
	}
	
	/* If value is less then root, it goes to the left. */
	if(value < (*tree_root)->value)
	{
		return binary_tree_insert(&((*tree_root)->left), value);
	}
	/* If value if greather then root, it goes to the right. */
	else if(value > (*tree_root)->value)
	{
		return binary_tree_insert(&((*tree_root)->right), value);
	}
	/* If value is equal to root, return false. */
	else
	{
		return false;
	}
}

bool binary_tree_search(tree_node_t *tree_root, int32_t value)
{
	/* Check if root is NULL. */
	if(tree_root == NULL) return false;

	/* If value is equal to root, return true. */
	if(value == tree_root->value)
	{
		return true;	
	}
	/* If value is less then root, search left. */
	else if(value < tree_root->value)
	{
		return binary_tree_search(tree_root->left, value);
	}
	/* If value is greather then root, search right.*/
	else
	{
		return binary_tree_search(tree_root->right, value);
	}
}
