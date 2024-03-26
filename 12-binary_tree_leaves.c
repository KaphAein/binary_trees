#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of leaves in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_left = 0, leaf_right = 0;

	if (tree == NULL)
		return (0);

	leaf_left = (!tree->left && !tree->right) ?
		1: binary_tree_leaves(tree->left);
	leaf_right = (!tree->left && !tree->right) ?
		1 : binary_tree_leaves(tree->right);

	return (leaf_left + leaf_right);
}
