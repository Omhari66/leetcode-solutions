# 23. Merge k Sorted Lists

**Difficulty:** 🔴 Hard
**Topics:** Linked List, Divide and Conquer, Heap (Priority Queue), Merge Sort, Tournament Sort
**Link:** https://leetcode.com/problems/merge-k-sorted-lists/

## Approach
we need to reverse only k group if these group till the group present in the LL.
what we do we use node as group prev which point to dummy node and group start next to it. 
we move our pointer till k then our new group will start from next to kth.
Now just reverse them using prev, curr, next pointer in the end connect the gs and gp;
group prev next become kth and group prev equal to group start.

## Complexity
- **Time:** o(n)
- **Space:** O(1)


**Patterns used:** `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
