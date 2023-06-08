#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: the tree to be traversed
 * Return: the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t r;
		size_t l;

		if (tree == NULL)
		{
			return (0);
		}
		else
		{
				if (tree)
				{
					if (tree->left != NULL)
					{
						l = 1 + binary_tree_height(tree->left);
					}
					else
					{
						l = 0;
					}
					if (tree->right != NULL)
					{
						r = 1 + binary_tree_height(tree->right);
					}
					else
					{
						r = 0;
					}
				}
		}

		return ((l > r) ? l : r);
}
