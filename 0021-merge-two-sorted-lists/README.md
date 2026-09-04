# 21. Merge Two Sorted Lists

**Difficulty:** 🟢 Easy
**Topics:** Linked List, Recursion
**Link:** https://leetcode.com/problems/merge-two-sorted-lists/

## Approach
1. Put slow and fast at beginning
2. Move fast n steps ahead
3. Move both one step at a time
4. When fast reaches NULL, slow is nth from end. 
just point slow->next=slow->next->next

## Complexity
- **Time:** O(n)
- **Space:** O(1)


**Patterns used:** `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
