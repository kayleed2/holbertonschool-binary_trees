#include "binary_trees.h"


/**
 * binary_tree_sibling - Checks if binary tree is full
 * @node: pointer to node to find sibling
 * Return: Pointer to sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *temp = NULL;

if (!node || node->parent == NULL)
{
return (NULL);
}

if (node->parent->left == node)
{
temp = node->parent->right;
}
else if (node->parent->right == node)
{
temp = node->parent->left;
}

return (temp);
}

/**
 * binary_tree_uncle - Finds uncle of node
 * @node: pointer to node to find sibling
 * Return: Pointer to uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *temp;

if (!node)
{
return (NULL);
}

temp = binary_tree_sibling(node->parent);

if (!temp)
{
return (NULL);
}

return (temp);
}
