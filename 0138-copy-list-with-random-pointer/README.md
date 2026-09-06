# 138. Copy List with Random Pointer

**Difficulty:** 🟡 Medium
**Topics:** Hash Table, Linked List
**Link:** https://leetcode.com/problems/copy-list-with-random-pointer/

## Approach
What we have to do in this question is make a deep copy of the original ll. There was also a random pointer that point to same. 
we use a hashmap to store the copy first then copy the random pointer also.
First create a copy of every original node and map original → copy. Then use that map to connect the next and random pointers of the copied nodes.”

## Complexity
- **Time:** O(n)
- **Space:** O(n)


**Patterns used:** `Hashing` `Linked List`

---
_Synced automatically by LeetCode → GitHub Sync._
