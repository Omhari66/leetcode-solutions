# 225. Implement Stack using Queues

**Difficulty:** 🟢 Easy
**Topics:** Stack, Design, Queue
**Link:** https://leetcode.com/problems/implement-stack-using-queues/

## Approach
use two queues -
push the first element into q2 then till the q1 not become empty push the front element of q1 to q2 and pop the element so next element can push>
After that swap q2 with q1.
Best example- q2 push [3] and q1 is[2,1] now what we want if we want queue to follow stack behaviour .
push all the front element of q1 into q2 so it become reverse. then swap the q2 with q1 then all same.

## Complexity
- **Time:** O(n)
- **Space:** O(n)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
