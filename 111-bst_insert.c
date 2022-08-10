#include "binary_trees.h"
#include "limits.h"

/**
 * bst_insert - Inserts value in binary search tree
 * @tree: double pointer to root node of bst of tree
 * @value: value to store in inserted *tree
 * Return: Pointer to new *tree or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *newnode = binary_tree_node(*tree, value);

     if (tree == NULL)
    {
        free(newnode);
        return (NULL);
    }


    if (*tree == NULL)
    {
        *tree = newnode;
        return (*tree);
    }

    if (value < (*tree)->n)
    {
        if ((*tree)->left == NULL)
        {
            (*tree)->left = newnode;
            return ((*tree)->left);
        }
        return (bst_insert(&((*tree)->left), value));
    }
    else if (value > (*tree)->n)
    {
        if ((*tree)->right == NULL)
        {
            (*tree)->right = newnode;
            return ((*tree)->right);
        }
        return (bst_insert(&(*tree)->right, value));
    }
 
    return (NULL);

}
