# 206. Reverse Linked List

**Difficulty:** 🟢 Easy
**Topics:** Linked List, Recursion
**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach
We need three pointer prev that point to null means we have a pointer that alread in the correct position. 
next pointer that point to next node of head which is current. 
what we do: point curr->next=prev and prev=curr,curr=next;

## Complexity
- **Time:** O(n)
- **Space:** o(1)


**Patterns used:** `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
