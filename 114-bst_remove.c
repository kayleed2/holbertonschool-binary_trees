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

/**
 * bst_remove - Searches bst for node to remove
 * @root: pointer to BST tree node
 * @value: value to search for
 * Return: Pointer to node with value or NULL
 */
bst_t *bst_remove(bst_t *root, int value)
{
    bst_t *node;
    bst_t *child;

    node = bst_search(root, value);

    if (root == NULL || node == NULL)
    {
        return (NULL);
    }

    if (node->right == NULL && node->left != NULL)
    {
        child = node->left;
    }

    if (node->right != NULL && node->left == NULL)
    {
        child = node->right;
    }

    if (node->parent->left == node)
    {
        node->parent->left = child;
    }

    if (node->parent->right == node)
    {
        node->parent->right = child;
    }
    free(node);
    return (root);
}
