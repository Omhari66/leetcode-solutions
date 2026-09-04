# 206. Reverse Linked List

**Difficulty:** 🟢 Easy
**Topics:** Linked List, Recursion
**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach
we have 3 method to do this first create a vector push into that then sort it and print.
2nd recursiev approach
In that if list1 is less than list2 we send list1→next and list2 in next recursive loop and return list1.
if list1 null return list2.
we create a dummy node and point curr to its address. if list1.val≤list2.val then cur point to that else point to list2 after this loop add a condition like if the list1 point to null then curr point to list2

## Complexity
- **Time:** O(n+m)
- **Space:** O(1)


**Patterns used:** `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
