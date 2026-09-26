# Open the Lock

[View on LeetCode](https://leetcode.com/problems/open-the-lock/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS, Stack/Queue

---

## Approach: Optimal

⏱️ **Time Spent:** 50min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

I use set to check if there is deadend then skip it and visited queue if visited then ignore else found all neighbours +1 and -1 total 8 . if front==target then return the steps we run.

---