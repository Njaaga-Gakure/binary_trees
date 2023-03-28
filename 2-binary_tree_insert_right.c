#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child
 * of another node
 * @parent: parent of the node
 * @value: value of the node
 * Return: the newly created node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		btnode->right = parent->right;
		parent->right->parent = btnode;
	}
	parent->right = btnode;

	return (btnode);
}
