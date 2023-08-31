#include "binary_trees.h"

/**
 * binary_tree_insert_right - function must return a pointer to the
 * created node or NULL on failure or if parent is NULL
 * @parent: parent
 * @value: val
 * Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new->left = NULL;

	if (parent->right)
	{
		current = parent->right;
		parent->right = new;
		new->right = current;
		new->right->parent = new;
	}
	else
	{
		parent->right = new;
		new->right = NULL;
	}
	return (new);
}
