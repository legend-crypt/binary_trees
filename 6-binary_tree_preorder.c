#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through a tree using preorder
 * @tree: the tree to be traversed
 * @func: call the printfunc to @tree node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
