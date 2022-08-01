#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: pointer to tree tree
 * Return: Size or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left == NULL && tree->right != NULL)
{
return (0);
}

if (tree->left != NULL && tree->right == NULL)
{
return (0);
}

if ((tree->left) && (tree->right))
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (1);
}
