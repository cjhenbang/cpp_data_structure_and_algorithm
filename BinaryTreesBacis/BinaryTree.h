#ifndef BINARY_TREE_H
#define BINARY_TREE_H

class BinaryTree {
private:
    class Node {
    public:
        int value;
        Node* left;
        Node* right;

        explicit Node(int v) : value(v), left(nullptr), right(nullptr) {}
    };

    Node* root;

    void destroy(Node* node);
    void preorder(Node* node) const;
    void inorder(Node* node) const;
    void postorder(Node* node) const;
    int countNodes(Node* node) const;
    int countLeaves(Node* node) const;

public:
    BinaryTree();
    ~BinaryTree();

    BinaryTree(const BinaryTree&) = delete;
    BinaryTree& operator=(const BinaryTree&) = delete;

    void buildSampleTree();
    void printPreorder() const;
    void printInorder() const;
    void printPostorder() const;
    int countNodes() const;
    int countLeaves() const;
};

#endif
