#include "binary_trees.h"

/**
 * binary_tree_height - measure the height
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree)
	{
		l_height = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		r_height = tree->right ? binary_tree_height(tree->right) + 1 : 1;

		return (MAX(l_height, r_height));
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left)
				- binary_tree_height(tree->right));
	}

	return (0);
}
