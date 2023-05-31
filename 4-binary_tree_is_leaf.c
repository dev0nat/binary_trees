#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node to be check
 * Return: 1 if node is a leaf, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
