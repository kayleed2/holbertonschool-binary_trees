#include "binary_trees.h"

/**
 * binary_tree_nodes - Countss nodes with one child
 * @tree: pointer to root node
 * Return: Size or NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (!tree->left && !tree->right)
{
return (0);
}
return (binary_tree_nodes(tree->right) + 1 + binary_tree_nodes(tree->left));
}
