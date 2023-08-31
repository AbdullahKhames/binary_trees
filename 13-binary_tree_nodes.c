#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	int nodes_left = 0;
	int nodes_right = 0;

	if (!tree)
	{
		return (0);
	}

	current = tree;
	if (current)
	{
		if (tree->right)
		{
			nodes_right = 1 + binary_tree_nodes(current->right);
		}
		if (tree->left)
		{
			nodes_left = 1 + binary_tree_nodes(current->right);
		}
	}
	return (1 + nodes_left + nodes_right);
}
