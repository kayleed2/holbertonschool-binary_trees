#include "binary_trees.h"
#include "limits.h"

/**
 * maxValue - Checks max value of tree
 * @root: pointer to root of tree
 * Return: Max Value
 */
int maxValue(const binary_tree_t *root)
{
    // Base case
    if (root == NULL)
        return INT_MIN;
 
    // Return maximum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->n;
    int lres = maxValue(root->left);
    int rres = maxValue(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}

/**
 * minValue - Checks min value of tree
 * @root: pointer to root of tree
 * Return: Min Value
 */
int minValue(const binary_tree_t *root)
{
    // Base case
    if (root == NULL)
      return INT_MAX;
 
    // Return minimum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->n;
    int lres = minValue(root->left);
    int rres = minValue(root->right);
    if (lres < res)
      res = lres;
    if (rres < res)
      res = rres;
    return res;
}

/**
 * binary_tree_sibling - Checks if binary tree is full
 * @tree: pointer to tree to find sibling
 * Return: Pointer to sibling tree or NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (tree == NULL)
    return(1);

  if (tree->left!=NULL && maxValue(tree->left) > tree->n)
    return(0);

  if (tree->right!=NULL && minValue(tree->right) < tree->n)
    return(0);

  if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
    return(0);

  return(1);
}
