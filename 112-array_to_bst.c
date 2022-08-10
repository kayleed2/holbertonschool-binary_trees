#include "binary_trees.h"
#include "limits.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to first element of the array to be converted
 * @size: number of element in the array
 * Return: Pointer to root node of created BST or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
    size_t i;
    binary_tree_t *parent = NULL;
    
    for (i = 0; i < size; i++)
    {
        bst_insert(&parent, array[i]);
    }
    return (parent);
}
