# [1195 - Binary Search Tree](https://www.beecrowd.com.br/repository/UOJ_1195_en.html)

<p>
	<img alt="Medium Badge" src="https://img.shields.io/badge/Medium-%23bf8700?style=for-the-badge">
	<img alt="Binary Search Tree Badge" src="https://img.shields.io/badge/Binary%20Search%20Tree-%238250df?style=for-the-badge">
</p>

In computer science, a binary search tree (BST), which may sometimes also be called an ordered or sorted binary tree, is a node-based binary tree data structure which has the following properties:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
- Both the left and right subtrees must also be binary search trees.

The major advantage of binary search trees over other data structures is that the related sorting algorithms and search algorithms such as in-order traversal can be very efficient.

For this problem, you will receive many set of numbers and from each set you must to build the BST equivalent. For example, an imput with the sequence of numbers: `8`, `3`, `10`, `14`, `6`, `4`, `13`, `7` and `1` will result in the following binary search tree:

```plaintext
          8
        /   \
      3      10
     / \       \
    1   6      14
       / \     /
      4   7  13
```

> ### Input
> The input file contains many test cases. The first line of input contains an integer $C$ $(C ≤ 1000)$, indicating the number of test cases that follow.
>
> Each test case contains two lines. The first line contains a number $N$ $(1 ≤ N ≤ 500)$ indicating the amount of numbers that will form each one of the trees. The second line contains the `N` distinct non-negative numbers, each one separated by a space.

> ### Output
> For each input set, you should print the message `Case n:`, where `n` is the sequential test case number, followed by 3 lines with the pre-order, in-order, post-order transversal for the current tree formatted according to the given example.
> 
> **Note:** None space must be printed after the last number of each line and the program should print a blank line after each test case, even after the last test case.

## 💡 Solution Explanation
This problem is a classic example of a binary search tree (BST) construction and traversal. After building the BST, we need to traverse it in three different ways:
- **pre-order:** Visit the root node first, then recursively do a pre-order traversal of the left subtree, followed by a pre-order traversal of the right subtree.
- **in-order:** Recursively do an in-order traversal of the left subtree, visit the root node, and finally do an in-order traversal of the right subtree.
- **post-order:** Recursively do a post-order traversal of the left subtree, followed by a post-order traversal of the right subtree, and finally visit the root node.

---
<p align="center">
	⚙️ This file was automatically generated with <a href="https://github.com/andreeluis/verde-cli">Verde CLI</a>.
</p>