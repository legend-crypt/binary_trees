#include "binary_trees.h"

/**
 * *binary_tree_insert_right - insert a node at the right node
 * @parent: the parent node
 * @value: the value to be inserted in the node
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
