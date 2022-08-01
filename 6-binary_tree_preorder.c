#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder traversal
 * @tree: pointer to node to check if root
 * @func: pointer to function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
{
return;
}

const binary_tree_t *root = tree;

/* Check left branch*/
while (tree->left != NULL)
{
func(tree->n);
tree = tree->left;
}
func(tree->n);
tree = root->left->right;

while (tree->right != NULL)
{
func(tree->n);
tree = tree->right;
}
func(tree->n);

/* Check right branch*/
tree = root->right;
while (tree->left != NULL)
{
func(tree->n);
tree = tree->left;
}
func(tree->n);
tree = root->right->right;

while (tree->right != NULL)
{
func(tree->n);
tree = tree->right;
}
func(tree->n);
}
