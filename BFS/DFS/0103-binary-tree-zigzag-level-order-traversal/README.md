# Binary Tree Zigzag Level Order Traversal

[View on LeetCode](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS

---

## Approach: Optmial

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

So in this question we need level order traversal in a zig-zag manner.
The core insight we found that zig-zag doing what just reversing the node when level is ODD.
SO we did the level order traversal using BFS and QUEUE and add a variable name as lev to calculate at which level we are and just traverse the order.

---