# Design Twitter

[View on LeetCode](https://leetcode.com/problems/design-twitter/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

We have to find DEPTH=Root → Node
"How far down am I?"
for that use recursion if root null then return 0 otherwise go left and count same for right then return the max of both +1.

---