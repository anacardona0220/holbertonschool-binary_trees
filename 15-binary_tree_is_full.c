#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If a leaf node is reached, it is considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Both left and right subtrees must be full */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If either subtree is missing, the tree is not full */
	return (0);
}
