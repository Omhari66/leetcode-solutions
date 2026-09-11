# 20. Valid Parentheses

**Difficulty:** 🟢 Easy
**Topics:** String, Stack, Bracket Sequences
**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach
Only problem with the misStack method that need O(1) others are already take that much tc.
So we need somthing that take care of the minimum in the stack.
we can do that for that we need to check all the elements inside stack that take O(n).
Other way use another stack push it if empty if not then push the min of top of it and current element it will maintaing the minimum element to push at top.
You need to pop both stack and minstack to maintaing the same element.

## Complexity
- **Time:** O(1)
- **Space:** O(n)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
