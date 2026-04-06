#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 180);
    root->left = binary_tree_node(root, 90);
    root->right = binary_tree_node(root, 250);

    binary_tree_print(root);

    _binary_tree_delete(root);
    return (0);
}
