# Flood Fill

[View on LeetCode](https://leetcode.com/problems/flood-fill/)

**Difficulty:** 🟢 Easy
**Tags:** Graph

---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(R x c)
- **Space Complexity:** O(R x c)

We first save the old color and then check if already new color is present then return the image.
we travere through DFS check the out of bond of r and c and if node is not equal to oldcolor then return.

Qeustion want us to change all the neighbour of its to new color only if it's neighbour has the old color.
change the node to old color if all base case passes.

traverse to his up,down,left and right recursively.

---