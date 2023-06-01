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
	binary_tree_t *new_node;
	binary_tree_t *temp;
	
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}
	temp = parent->left;
	parent->left = new_node;
	new_node->left = temp;
	return (new_node);

}
