# Binary Tree Maximum Path Sum

[View on LeetCode](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

**Difficulty:** 🔴 Hard
**Tags:** BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 30min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

the thing is we need to find the best path sum so we travel to left if it's greater than 0 take it and same for right.
base case we choose if root is null return 0.
we made a path as root+lg+rg
but we return to parent as best of root+max of lg and rg why so bcz we need to return the path and if we take both then that a branch.


---