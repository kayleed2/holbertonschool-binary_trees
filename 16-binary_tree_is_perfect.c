#include "binary_trees.h"

/**
 * depth - Measures depth of node of binary tree
 * @tree: pointer to  node of tree to check depth
 * Return: Size or NULL
 */

int depth(const binary_tree_t *tree)
{
int d = 0;
while (tree != NULL)
{
d++;
tree = tree->left;
}
return (d);
}

/**
 * is_perfect - Checks if binary tree is perfect
 * @root: pointer to tree tree
 * @d: depth
 * @level: height
 * Return: Size or 0
 */

int is_perfect(const binary_tree_t *root, int d, int level)
{
if (root == NULL)
return (1);

if (root->left == NULL && root->right == NULL)
return (d == level + 1);

if (root->left == NULL || root->right == NULL)
return (0);

return (is_perfect(root->left, d, level + 1) &&
is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: pointer to tree tree
 * Return: Size or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int thing;
if (!tree)
{
return (0);
}
thing = depth(tree);
return (is_perfect(tree, thing, 0));
}
