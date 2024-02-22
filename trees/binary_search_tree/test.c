
#include "binary_search_tree.h"

int main()
{
	tree_node_t *pTree = NULL;

	binary_tree_insert(&pTree, 10);
    binary_tree_insert(&pTree, 50);
	binary_tree_insert(&pTree, 0);
	binary_tree_insert(&pTree, 40);
	binary_tree_insert(&pTree, 20);
	binary_tree_insert(&pTree, 30);

	binary_tree_print(pTree);

	int32_t val = 10;

	if(true == binary_tree_search(pTree, val)) printf("Found value %d\r\n", val);
	else printf("Didn't find value %d\r\n", val);

	val = 20;

	if(true == binary_tree_search(pTree, val)) printf("Found value %d\r\n", val);
	else printf("Didn't find value %d\r\n", val);

	val = 5;

	if(true == binary_tree_search(pTree, val)) printf("Found value %d\r\n", val);
	else printf("Didn't find value %d\r\n", val);

	return 0;
}
