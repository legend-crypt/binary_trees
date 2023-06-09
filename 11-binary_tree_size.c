#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the binary tree
 * @tree: the tree to be traversed
 * Return: the size of the tree on success (NULL) if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
		size_t left_count;
		size_t right_count;
		size_t sum_size;

		if (tree == NULL)
		{
			return (0);
		}
		else
		{
			left_count = binary_tree_size(tree->left);
			right_count =  binary_tree_size(tree->right);
			sum_size = (left_count + right_count + 1);
		}

	return (sum_size);
}
