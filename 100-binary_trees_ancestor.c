#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: a pointer to the first node.
 * @second: a pointer to the second node.
 * Return: common ancestor, else NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *one, *two;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	one = first->parent, two = second->parent;
	if (first == second || !one || (!one->parent && second))
		return (binary_trees_ancestor(first, two));
	else if (one == second || !two || (!two->parent && one))
		return (binary_trees_ancestor(one, second));
	return (binary_trees_ancestor(one, two));
}
