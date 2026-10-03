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

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** o(n)

Go to children
    ↓
Get their heights
    ↓
Check balance
    ↓
Return height

---

## Approach: BFS+QUEUE

⏱️ **Time Spent:** 15min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

we need to do the level order traversal for that i have used the queue to store the front as root node then traverse the node level wise and store them in a level vector and each level we push into the answer vector of vector.

---