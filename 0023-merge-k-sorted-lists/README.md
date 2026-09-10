# 23. Merge k Sorted Lists

**Difficulty:** 🔴 Hard
**Topics:** Linked List, Divide and Conquer, Heap (Priority Queue), Merge Sort, Tournament Sort
**Link:** https://leetcode.com/problems/merge-k-sorted-lists/

## Approach
we have a binary tree and we have to return it into a preorder linklist.
what will happen our root left will become null and root right will point to next node of linked list.
we save the right node of tree and then find the last right node of left subtree and then we attach that with temp and all the node of left become right and left point to null in end.

## Complexity
- **Time:** O(n)
- **Space:** O(1)


**Patterns used:** `Linked List` `Trie`

---
_Synced automatically by LeetCode → GitHub Sync._
