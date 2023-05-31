#include "binary_trees.h"

/**
 * binary_tree_insert_right -Function insert a node at the right of another node
 * @parent: a pointer to the node to insert the right child in
 * @value: the value to store in the new node
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *		Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	if (parent == NULL)
		return (NULL);

	new_n = binary_tree_node(parent, value);
	if (new_n == NULL)
		return (NULL);

	if (parent->right)
	{
		new_n->right = parent->right;
		parent->right->parent = new_n;
	}
	parent->right = new_n;

	return (new_n);
}
