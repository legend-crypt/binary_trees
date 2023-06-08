#include "binary_trees.h"
/**
 * binary_tree_depth - this function 
 * @tree: the tree to be traversed
 * Return: the depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
		size_t depth_count;

		if (tree->parent != NULL)
		{
			depth_count = binary_tree_depth(tree->parent) + 1;
		}
		else
		{
			return (0);
		}
		return (depth_count);
}
