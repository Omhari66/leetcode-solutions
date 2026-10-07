# Construct Binary Tree from Preorder and Inorder Traversal

[View on LeetCode](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(n)
- **Space Complexity:** o(h)

1. Take first preorder element → root
2. Find root in inorder
3. Everything left of root → left subtree
4. Everything right of root → right subtree
5. Repeat

---