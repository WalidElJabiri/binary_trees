#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measures the depth
 * Return: 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree)
	{
		while (tree->parent)
		{
			dep++;
			tree = tree->parent;
		}
	}

	return (dep);
}
