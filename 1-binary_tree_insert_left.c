#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of the node
 * @value: value of the newly created node
 * Return: the newly creted node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *btnode;

	if (parent == NULL)
		return (NULL);

	btnode = malloc(sizeof(binary_tree_t));

	if (btnode == NULL)
		return (NULL);

	btnode->n = value;
	btnode->parent = parent;
	btnode->left = NULL;
	btnode->right = NULL;

	if (parent->left != NULL)
	{
		btnode->left = parent->left;
		parent->left->parent = btnode;
	}

	parent->left = btnode;

	return (btnode);
}
