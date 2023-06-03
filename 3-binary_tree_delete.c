#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - This function deletes a binary tree
 * @tree: - the tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}

