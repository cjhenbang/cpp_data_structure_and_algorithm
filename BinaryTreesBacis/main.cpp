#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree tree;

    // Build this fixed tree using the provided helper method.
    //          10
    //         /  \
    //        5    15
    //       / \     \
    //      3   7     20
    tree.buildSampleTree();

    std::cout << "Preorder: ";
    tree.printPreorder();
    std::cout << '\n';

    std::cout << "Inorder: ";
    tree.printInorder();
    std::cout << '\n';

    std::cout << "Postorder: ";
    tree.printPostorder();
    std::cout << '\n';

    std::cout << "Node count: " << tree.countNodes() << '\n';
    std::cout << "Leaf count: " << tree.countLeaves() << '\n';
    return 0;
}
