# 23. Merge k Sorted Lists

**Difficulty:** 🔴 Hard
**Topics:** Linked List, Divide and Conquer, Heap (Priority Queue), Merge Sort, Tournament Sort
**Link:** https://leetcode.com/problems/merge-k-sorted-lists/

## Approach
We have a list of sorted ll and we need to merge them into a ll in asc order.
One approach could be we can merge them then sort them that also do the job but the time complexity would be then O(n logn) and o(n).
optimal approach -we will use a priority queue data structure that do the job of finding the sortest element and we can direct point to our dummy node.
time coplexity-O(n log k) and O(n)

## Complexity
- **Time:** O(nlog k)
- **Space:** o(n)


**Patterns used:** `Stack/Queue` `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
