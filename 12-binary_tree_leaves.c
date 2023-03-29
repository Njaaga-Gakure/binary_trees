#include "binary_trees.h"


/**
 * binary_tree_leaves - counts no. of leaves
 * in a binary tree
 *
 * @tree: the binary tree
 * Return: No. of leaves
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t noOfLeaves = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			noOfLeaves += 1;
		else
			noOfLeaves += 0;

		noOfLeaves += binary_tree_leaves(tree->left);
		noOfLeaves += binary_tree_leaves(tree->right);
	}
	return (noOfLeaves);
}
