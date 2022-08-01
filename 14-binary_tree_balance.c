#include "binary_trees.h"

/**
 * height - Measures height of binary tree
 * @tree: pointer to root node of tree to check measure
 * Return: Size or NULL
 */

size_t height(const binary_tree_t *tree)
{
size_t left;
size_t right;

if (tree == NULL)
{
return (0);
}

if (!tree->left && !tree->right)
{
return (0);
}

left = height(tree->left);
right = height(tree->right);

if (left > right)
{
return (left + 1);
}
else
{
return (right + 1);
}
}

/**
 * binary_tree_balance - Measure balance factor
 * @tree: pointer to tree node
 * Return: Size or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left;
int right;

if (tree == NULL)
{
return (0);
}

if (!tree->right)
{
right = 0;
}
else
{
right = height(tree->right);
}

if (!tree->left)
{
left = 0;
}
else
{
left = height(tree->left);
}

return (left - right);
}
