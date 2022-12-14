#include "binary_trees.h"

/**
 * binary_tree_size - Measures depth of node of binary tree
 * @tree: pointer to  node of tree to measure size
 * Return: Size or NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
