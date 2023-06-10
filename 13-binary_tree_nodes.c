#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns the number of nodes with children
 * @tree: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t nodes = 0;

	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
