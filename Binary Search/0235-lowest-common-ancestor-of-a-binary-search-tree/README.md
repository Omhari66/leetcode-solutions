# Lowest Common Ancestor of a Binary Search Tree

[View on LeetCode](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

**Difficulty:** 🟡 Medium
**Tags:** Binary Search

---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

we need to find the lowest ancestor and we know in binary search if parentVal > p and q then it should be in right side other wise search in left side else we find the lowest.
It's more efficient in iterative there you will solve in O(1) space complexity

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n0
- **Space Complexity:** O(h)

We know BST give sorted answer and we need to return kth so we traverse left and count the node when count become equal to k return the root val as answer else traverse the right side.

---