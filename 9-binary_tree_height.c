#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else
	{
		size_t left_height = binary_tree_height(root->left);
		size_t right_height = binary_tree_height(root->right);
		return (left_height > right_height ? left_height : right_height) + 1;
	}
}
