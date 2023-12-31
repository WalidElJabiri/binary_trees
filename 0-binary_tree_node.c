#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: ptr to the parent node of the node
 * @value: value to put the new node
 * Return: a ptr to the new node, or NULL on fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}

	return (node);
}
