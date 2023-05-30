#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: is a pointer to the parent of the node to create
 * @value: is a value to put in the new node
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
