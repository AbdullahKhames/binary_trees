#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->right && !node->left)
	{
		return (1);
	}

	return (0);
}

/**
 * binary_tree_leaves -  function that counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: size  of a binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (0);
}
