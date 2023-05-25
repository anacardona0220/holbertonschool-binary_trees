#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;
if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
return (0);
if (tree->left)
left_height = binary_tree_height(tree->left);
if (tree->right)
right_height = binary_tree_height(tree->right);
if (left_height >= right_height)
return (left_height + 1);
else
return (right_height + 1);
}
