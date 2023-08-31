#include "binary_trees.h"

/**
 * binary_tree_insert_left - function must return a pointer to the created node
 *  or NULL on failure or if parent is NULL
 * @parent: parent
 * @value: val
 * Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *current;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	if (parent->left)
	{
		current = parent->left;
		parent->left = new;
		new->left = current;
		new->left->parent = new;

	}
	else
	{
		parent->left = new;
	}

	return (new);
}
