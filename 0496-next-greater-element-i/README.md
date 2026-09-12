# 496. Next Greater Element I

**Difficulty:** 🟢 Easy
**Topics:** Array, Hash Table, Stack, Monotonic Stack
**Link:** https://leetcode.com/problems/next-greater-element-i/

## Approach
We have a temperature array. For each day, we need to find the next hotter day, meaning the first temperature to the right that is greater than the current temperature. We return the number of days between them.

We use a stack to store the indices of days that are still waiting for a hotter day.

When we find a hotter temperature, we compare it with the temperature at the index on top of the stack. If the current temperature is hotter, we calculate the distance:

current index - stored index

and put that answer at the stored index.

If the current temperature is not hotter, we keep the current index in the stack because it is still waiting for a hotter day.

## Complexity
- **Time:** O(n)
- **Space:** O(n)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
