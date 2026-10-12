# Binary Tree Basics — C++ Practice

**Goal:** Practice recursive binary-tree traversal and counting using `class`.

## Tree (already built for you)

```text
        10
       /  \
      5    15
     / \     \
    3   7     20
```

## Tasks

Open `BinaryTree.cpp` and complete the five `TODO` methods in order:

1. `preorder(Node*)`: root → left → right.
2. `inorder(Node*)`: left → root → right.
3. `postorder(Node*)`: left → right → root.
4. `countNodes(Node*)`: return total nodes in this subtree.
5. `countLeaves(Node*)`: a leaf has **no left or right child**.

Do not change `main.cpp` or the supplied sample tree for the first run. Each traversal should print values separated by spaces; the exact trailing space is unimportant.

## Expected output

```text
Preorder: 10 5 3 7 15 20
Inorder: 3 5 7 10 15 20
Postorder: 3 7 5 20 15 10
Node count: 6
Leaf count: 3
```

## CLion

Open this directory as a CMake project, choose the `BinaryTreeBasics` run target, and click Run. Initial output is intentionally incomplete until you finish the TODOs.

## Optional challenge

After completing the five tasks, write `height(Node*)` where height is measured in **edges**, so a leaf has height 0 and an empty tree has height -1.

## Git

Save the exercise in your repository under `02-Trees/BinaryTreeBasics/`.
