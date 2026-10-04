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

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

This question was to print alll the node whic are the rightmost side not just only right.
So we choose the BFS level wise traversal and simply where iteration become size-1 mean the last node then push into the ans.
if queue size is 3 then right most node is size-1.

---