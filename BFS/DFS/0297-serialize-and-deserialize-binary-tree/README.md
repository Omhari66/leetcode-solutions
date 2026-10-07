# Serialize and Deserialize Binary Tree

[View on LeetCode](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)

**Difficulty:** 🔴 Hard
**Tags:** BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 25min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

Serialization: Use preorder traversal: root → left → right. For every node, append its value followed by a delimiter. For nullptr, append #,. This ensures missing children are preserved.
Deserialization: Maintain a shared index pointing to the next token. If the current token is #, advance past it and return nullptr. Otherwise, read the complete number, create a node, recursively build its left subtree, then its right subtree. Finally, return the constructed node. The same preorder structure used during serialization guarantees that deserialization reconstructs the original tree correctly.

---