#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: parent node.
 * @value: value to add.
 * Return: new node or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (parent == NULL || new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent->right)
		new->right = parent->right;
	new->parent = parent;
	parent->right = new;

	return (new);
}
