#include "binary_trees.h"

/**
 *binary_tree_node - create new node
 *
 *@parent: pointer the current parent node
 *@value: value in the current parent node
 *
 *Return: new_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;

	return (new_node);
}