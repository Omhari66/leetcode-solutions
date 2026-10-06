# Validate Binary Search Tree

[View on LeetCode](https://leetcode.com/problems/validate-binary-search-tree/)

**Difficulty:** 🟡 Medium
**Tags:** Binary Search

---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

A BST is not "parent > left child and parent < right child." It is "every node must stay within the range created by all of its ancestors.
we use LLONG_MIN and MAX to check the range as enfinity.


---