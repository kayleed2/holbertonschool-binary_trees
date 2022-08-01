#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: pointer to root node of tree to check measure
 * Return: Size or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (!tree->left && !tree->right)
{
return (0);
}

size_t left = binary_tree_height(tree->left);
size_t right = binary_tree_height(tree->right);

if (left >= right)
{
return (left + 1);
}
else
{
return (right + 1);
}
}
