<<<<<<< HEAD
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Simple debug print of the tree
 * @tree: Pointer to root
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;

	printf("%d\n", tree->n);

	if (tree->left)
		binary_tree_print(tree->left);
	if (tree->right)
		binary_tree_print(tree->right);
=======
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints binary tree in preorder (debug)
 * @tree: Pointer to root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;

    printf("%d\n", tree->n);

    if (tree->left)
        binary_tree_print(tree->left);
    if (tree->right)
        binary_tree_print(tree->right);
>>>>>>> e513452 (Initial commit: Tasks 4)
}
