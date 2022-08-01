#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates tree node
 * @parent: pointer to right node
 * @value: Value to put in new node
 * Return: Pointer to new node on success, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}

if (parent->right == NULL)
{
parent->right = binary_tree_node(parent, value);
}
else
{
parent->right->right =  binary_tree_node(parent->right, parent->right->n);
parent->right->n = value;
}
return (parent->right);
}
