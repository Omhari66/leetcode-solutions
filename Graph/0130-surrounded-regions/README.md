# Surrounded Regions

[View on LeetCode](https://leetcode.com/problems/surrounded-regions/)

**Difficulty:** 🟡 Medium
**Tags:** Graph

---

## Approach: Optimal

⏱️ **Time Spent:** 40min

- **Time Complexity:** R x C
- **Space Complexity:** R x C

We need to change O to X all other X which are not adjacent to a boundary cell.

So we run the dfs from the boundary cell if that boudnary cell is O and create a visited matrix to mark all the adjacent cell of boundary.
After marking all boudnay cell  having O as visited.
We traverse the matrix and if not visited and have O change to X.

---

## Approach: Optimal

⏱️ **Time Spent:** 30min

- **Time Complexity:** O(v+e)
- **Space Complexity:** O(v)

So we need to make a clone with the same original graph.
we create an unordered map of two nodes and first store the original node and create a copy with the same node and store it. then traverse the neighbour of that original node and store that node using dfs traversal

---