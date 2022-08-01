#include "binary_trees.h"

/**
 * binary_tree_node - Creates tree node
 * @parent: pointer to parent node
 * @value: Value to put in new node
 * Return: Pointer to new node on success, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

if (!newnode)
{
return (NULL);
}
newnode->n = value;
newnode->left = NULL;
newnode->right = NULL;

if (!parent)
{
newnode->parent = NULL;
}
newnode->parent = parent;
return (newnode);
}
