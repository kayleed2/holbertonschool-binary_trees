#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves of binary tree
 * @tree: pointer to root node
 * Return: Size or NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
