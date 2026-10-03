# Balanced Binary Tree

[View on LeetCode](https://leetcode.com/problems/balanced-binary-tree/)

**Difficulty:** 🟢 Easy
**Tags:** BFS/DFS

---

## Approach: Brute force

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n^2)
- **Space Complexity:** o(n)

we need to check A binary tree is height-balanced if, for every node, the height of its left subtree and right subtree differs by at most 1.
so use helper method to find the height and the main part was not only check root but every node so 1. Current node is balanced
        AND
2. Left subtree is balanced
        AND
3. Right subtree is balanced

---