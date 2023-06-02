#include "binary_trees.h"
#include <stdlib.h>
/**
 * *binary_tree_insert_left - Insert a node a parent nodes left
 * @parent: the parent node
 * @value: the value we are inserting
 * Return: the newnode(Success) NULL(Failure)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node->left = temp;
		temp->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}

