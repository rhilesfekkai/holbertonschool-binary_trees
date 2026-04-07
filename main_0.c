#include "binary_trees.h"

/**
 * print_num - Affiche un entier
 * @n: Nombre à afficher
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Test de binary_tree_preorder et binary_tree_delete
 * Return: 0
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    printf("Pre-order traversal:\n");
    binary_tree_preorder(root, &print_num);

    /* Libération de l'arbre */
    binary_tree_delete(root);

    return (0);
}
