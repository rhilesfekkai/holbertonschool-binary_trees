#include "binary_trees.h"

/**
 * binary_tree_delete - Libère un arbre binaire
 * @tree: Racine de l'arbre
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
