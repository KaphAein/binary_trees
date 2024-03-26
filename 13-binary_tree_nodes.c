#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left = 0, node_right = 0;

	if (tree == NULL)
		return (0);

	node_left = binary_tree_nodes(tree->left);
	node_right = binary_tree_nodes(tree->right);

	return ((tree->left || tree->right) ?
			(node_left + node_right + 1) : (node_left + node_right));
}
