# C - Binary trees

This is a project about binary trees that we worked on to learn the details, advantages, and disadvantages of using trees as data structures. I implemented different types of binary trees including binary, binary search, AVL, and Max Binary Heap trees and learned how to traverse them.

## Data Structures
```
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Tasks
New Node

0- binary_tree_node.c: This C function creates a binary tree node with a given parent and value and returns a pointer to the new node. If the function fails to create the node, it returns NULL.
Insert Left

1- binary_tree_insert.c: This C function inserts a node as the left child of another node. If the given parent already has a left node, the new node takes its place, and the old left child becomes the left child of the new node. The function returns a pointer to the new node, or NULL on failure.
Insert Right

2- binary_tree_insert_right.c: This C function inserts a node as the right child of another node. If the given parent already has a right node, the new node takes its place, and the old right child becomes the right child of the new node. The function returns a pointer to the new node, or NULL on failure.
Delete

3- binary_tree_delete.c: This C function deletes an entire binary tree.
Is Leaf

4- binary_tree_is_leaf.c: This C function checks if a given node is a leaf or not. If the node is a leaf, the function returns 1; otherwise, it returns 0.
Is Root

5- binary_tree_is_root.c: This C function checks if a given node is a root or not. If the node is a root, the function returns 1; otherwise, it returns 0.
Pre-order Traversal

6- binary_tree_preorder.c: This C function traverses a binary tree using pre-order traversal.
In-order Traversal

7- binary_tree_inorder.c: This C function traverses a binary tree using in-order traversal.
Post-order Traversal

8- binary_tree_postorder.c: This C function traverses a binary tree using post-order traversal.
Height

9- binary_tree_height.c: This C function returns the height of a binary tree.
Depth

10- binary_tree_depth.c: This C function returns the depth of a given node in a binary tree.
Size

11- binary_tree_size.c: This C function returns the size of a binary tree.
Leaves

12- binary_tree_leaves.c: This C function returns the number of leaves in a binary tree.
Nodes

13- binary_tree_nodes.c: This C function returns the number of nodes in a binary tree with at least one child.
Balance Factor

14- binary_tree_balance.c: This C function returns the balance factor of a binary tree.
Is Full

15-b inary_tree_is_full.c: This C function checks if a binary tree is full. If the tree is full, the function returns 1; otherwise, it returns 0.
Is Perfect

16- binary_tree_is_perfect.c: This C function checks if a binary tree is perfect. If the tree is perfect, the function returns 1; otherwise, it returns 0.
Sibling

17- binary_tree_sibling.c: This C function returns a pointer to the sibling of a given node in a binary tree. If no sibling is found, it returns NULL.
Uncle

18- binary_tree_uncle.c: This C function returns a pointer to the uncle of a given node in a binary tree. If no uncle is found, it returns NULL.

## Authors
![GitHub Contributors Image](https://contrib.rocks/image?repo=anacardona0220/holbertonschool-higher_level_programming) Ana Maria Cardona Botero - <a href="https://github.com/anacardona0220" target="_blank"> @anacardona0220</a> :genie_woman:![Your Repository's Stats](https://github-readme-stats.vercel.app/api?username=anacardona0220&show_icons=true)
