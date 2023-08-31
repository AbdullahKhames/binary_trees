#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{

	int nodes_left = 0;
	int nodes_right = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		nodes_left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		nodes_right = 1 + binary_tree_height(tree->right);
	}

	return (nodes_left > nodes_right ? nodes_left : nodes_right);
}
