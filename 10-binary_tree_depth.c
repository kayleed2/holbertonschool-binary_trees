#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of node of binary tree
 * @tree: pointer to  node of tree to check depth
 * Return: Size or NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t height;

if (!tree || !tree->parent)
{
return (0);
}

height = binary_tree_depth(tree->parent);
return (height + 1);
}
