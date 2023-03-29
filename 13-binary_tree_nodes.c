#include "binary_trees.h"

/**
 * binary_tree_nodes - count no. of nodes
 * with atleast one child
 *
 * @tree: The binary tree
 * Return: no. of nodes with atleast one child
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes += 1;
		else
			nodes += 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
