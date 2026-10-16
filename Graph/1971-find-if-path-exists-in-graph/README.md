# Find if Path Exists in Graph

[View on LeetCode](https://leetcode.com/problems/find-if-path-exists-in-graph/)

**Difficulty:** 🟢 Easy
**Tags:** Graph

---

## Approach: Optmial

⏱️ **Time Spent:** 20

- **Time Complexity:** O(n+m0
- **Space Complexity:** O(n)

so we have to find is there any path btw src and destination.
so we use the DFS for traversing and travers the whole graph and check the if the destination become true then it means there is a path.
we didn't traverse the whole grapht just return visited[dest]

---