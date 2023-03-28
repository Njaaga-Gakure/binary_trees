#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put into the node
 * Return: return a pointer to the newly created node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *btnode = malloc(sizeof(binary_tree_t));

	if (btnode == NULL)
		return (NULL);

	btnode->n = value;
	btnode->parent = parent;
	btnode->left = NULL;
	btnode->right = NULL;
	return (btnode);
}
