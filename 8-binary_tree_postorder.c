#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse through a tree using preorder
 * @tree: the tree to be traversed
 * @func: call the printfunc to @tree node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
