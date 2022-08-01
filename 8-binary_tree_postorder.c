#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order tree traversal
 * @tree: pointer to root node of tree traversal
 * @func: pointer to function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!func || !tree)
{
return;
}
if (tree->left)
{
binary_tree_postorder(tree->left, func);
}
if (tree->right)
{
binary_tree_postorder(tree->right, func);
}
func(tree->n);
}
