#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: parent node.
 * @value: value to add.
 * Return: new node or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (parent == NULL || new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent->left)
		new->left = parent->left;
	new->parent = parent;
	parent->left = new;

	return (new);
}
