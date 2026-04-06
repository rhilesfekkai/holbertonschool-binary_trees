#include "binary_trees.h"

/* Simple print function for testing (tree visualization) */
void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;

    printf("%d\n", tree->n);
    if (tree->left)
        binary_tree_print(tree->left);
    if (tree->right)
        binary_tree_print(tree->right);
}
