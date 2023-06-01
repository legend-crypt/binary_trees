#include "binary_trees.h"
#include <stdlib.h>
/**
 * *binary_tree_node - This function creates a binary tree node with a parent
 * @parent: the parent node
 * @value: the data we are inserting
 * Return: the a pointer to a node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	node->n = value;
	return (node);
}
