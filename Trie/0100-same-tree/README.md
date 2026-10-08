# Same Tree

[View on LeetCode](https://leetcode.com/problems/same-tree/)

**Difficulty:** 🟢 Easy
**Tags:** Trie

---

## Approach: Optmial

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

Create a Node containing children[26] and an isEnd flag. The root is an empty starting node. For insert, start from the root and process each character. Convert the character to an index using ch - 'a'. If the corresponding child doesn't exist, create a new node, then move to that child. After the final character, mark isEnd = true. For search, follow the same path and return false if any character is missing; otherwise return the final node's isEnd. For startsWith, follow the prefix path and return true if every character exists.

---