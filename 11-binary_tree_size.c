#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size  of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: size  of a binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int nodes_left = 0;
	int nodes_right = 0;
	int total_nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		if (tree->right)
		{
			nodes_right = 1 + binary_tree_size(tree->right);
		}
		if (tree->left)
		{
			nodes_left = 1 + binary_tree_size(tree->left);
		}


		total_nodes = 1 + nodes_right + nodes_left;

	}
	return (total_nodes);
}
