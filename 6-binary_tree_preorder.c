#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder tree traversal
 * @tree: pointer to root node of tree traversal
 * @func: pointer to function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!func || !tree)
{
return;
}
func(tree->n);

if (tree->left)
{
binary_tree_preorder(tree->left, func);
}
if (tree->right)
{
binary_tree_preorder(tree->right, func);
}
}
