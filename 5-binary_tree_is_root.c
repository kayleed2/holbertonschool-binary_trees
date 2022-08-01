#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is leaf
 * @node: pointer to node to check if root
 * Return: 1 if node is root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
