#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre en préordre
 * @tree: Racine de l'arbre
 * @func: Fonction à appeler sur chaque noeud
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
