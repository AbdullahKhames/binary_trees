#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: depth of a binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{

	int edges_up = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		edges_up = 1 + binary_tree_depth(tree->parent);
	}

	return (edges_up);
}
