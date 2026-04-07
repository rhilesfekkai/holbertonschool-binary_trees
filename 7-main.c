#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 * @n: Number to print
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point for in-order traversal test
 * Return: Always 0
 */
int main(void)
{
    binary_tree_t *root;

    /* Création de l'arbre binaire */
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    /* Affichage de l'arbre */
    binary_tree_print(root);

    /* Parcours in-order */
    printf("In-order traversal:\n");
    binary_tree_inorder(root, &print_num);

    /* Libération mémoire */
    binary_tree_delete(root);

    return (0);
}
