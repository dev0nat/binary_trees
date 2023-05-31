#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 *
 * @node: Is a pointer to the node to check
 * Return: If the node is a root - 1. Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node == NULL || node->parent) ? 0 : 1);
}
