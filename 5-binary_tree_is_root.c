#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to be checked
 * Return: 1 if  @node leaf or 0 on if @node is not leaf
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	return (0);
}
