#include "binary_trees.h"


/**
 * binary_tree_sibling - Checks if binary tree is full
 * @node: pointer to node to find sibling
 * Return: Pointer to sibling node or NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
    const binary_tree_t *temp = NULL;

    if (tree)
    {
        if (!binary_tree_is_bst(tree->left))
          return(0);
 
        if (temp != NULL && tree->n <= temp->n)
        {
            return(0);
        }
 
        temp = tree;
 
        return binary_tree_is_bst(tree->right);
    }
    return(1);
}
