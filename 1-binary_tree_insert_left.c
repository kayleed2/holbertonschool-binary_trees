#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates tree node
 * @parent: pointer to left node
 * @value: Value to put in new node
 * Return: Pointer to new node on success, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}

if (parent->left == NULL)
{
parent->left = binary_tree_node(parent, value);
}
else
{
parent->left->left =  binary_tree_node(parent->left, parent->left->n);
parent->left->n = value;
}
return (parent->left);
}
