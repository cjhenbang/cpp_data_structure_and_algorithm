#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    destroy(root);
}

void BinaryTree::destroy(Node* node) {
    if (node == nullptr) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}

void BinaryTree::buildSampleTree() {
    destroy(root);
    root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(20);
}

// TODO 1: implement preorder (root, left, right).
void BinaryTree::preorder(Node* node) const {
    // Your code here.
}

// TODO 2: implement inorder (left, root, right).
void BinaryTree::inorder(Node* node) const {
    // Your code here.
}

// TODO 3: implement postorder (left, right, root).
void BinaryTree::postorder(Node* node) const {
    // Your code here.
}

// TODO 4: count every node recursively.
int BinaryTree::countNodes(Node* node) const {
    // Replace placeholder with your implementation.
    return 0;
}

// TODO 5: count nodes with no children.
int BinaryTree::countLeaves(Node* node) const {
    // Replace placeholder with your implementation.
    return 0;
}

void BinaryTree::printPreorder() const { preorder(root); }
void BinaryTree::printInorder() const { inorder(root); }
void BinaryTree::printPostorder() const { postorder(root); }
int BinaryTree::countNodes() const { return countNodes(root); }
int BinaryTree::countLeaves() const { return countLeaves(root); }
