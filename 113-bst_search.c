#include "binary_trees.h"
#include "limits.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @tree: pointer to BST tree node
 * @value: value to search for
 * Return: Pointer to node with value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
    const bst_t *temp = tree;
    
    if (temp == NULL)
    {
        return (NULL);
    }
    if (temp->n == value)
    {
        return ((bst_t *)temp);
    }
    if (temp->n > value)
    {
        return bst_search(temp->left, value);
    }
    return bst_search(temp->right, value);
}
