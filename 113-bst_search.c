#include "binary_trees.h"
#include "limits.h"

/**
 * bst_search - Searches bst for value
 * @tree: pointer to BST tree node
 * @value: value to search for
 * Return: Pointer to node with value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
{
return (NULL);
}
if (tree->n == value)
{
return ((bst_t *)tree);
}
if (tree->n > value)
{
return (bst_search(tree->left, value));
}
return (bst_search(tree->right, value));
}
