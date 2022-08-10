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
if (tree == NULL)
{
return (NULL);
}


if (*tree == NULL)
{
*tree = binary_tree_node(*tree, value);
return (*tree);
}

if (value < (*tree)->n)
{
if ((*tree)->left == NULL)
{
(*tree)->left = binary_tree_node(*tree, value);
return ((*tree)->left);
}
return (bst_insert(&((*tree)->left), value));
}
if (value > (*tree)->n)
{
if ((*tree)->right == NULL)
{
(*tree)->right = binary_tree_node(*tree, value);
return ((*tree)->right);
}
return (bst_insert(&(*tree)->right, value));
}
return (NULL);

}
