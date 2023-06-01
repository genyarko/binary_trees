#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: In-order traversal visits the left subtree, then the current node,
 *              and finally the right subtree. The value in each node is passed
 *              as a parameter to the function. Checks if both tree and func before proceeding with the traversal.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
