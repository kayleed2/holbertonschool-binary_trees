#include "binary_trees.h"
#include "limits.h"

/**
 * bst - Checks max value of tree
 * @tree: pointer to root of tree
 * @min: min val
 * @max: max val
 * Return: recursive
 */
int bst(const binary_tree_t *tree, int min, int max)
{
if (tree == NULL)
{
return (1);
}

if (tree->n >= max || tree->n <= min)
{
return (0);
}

return ((bst(tree->left, min, tree->n)) && (bst(tree->right, tree->n, max)));
}

/**
 * binary_tree_is_bst - Checks if binary tree is bst
 * @tree: pointer to tree to find sibling
 * Return: Pointer to sibling tree or NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (bst(tree, INT_MIN, INT_MAX));
}
