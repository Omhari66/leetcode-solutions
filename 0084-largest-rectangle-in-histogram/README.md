# 84. Largest Rectangle in Histogram

**Difficulty:** 🔴 Hard
**Topics:** Array, Stack, Monotonic Stack, Range Minimum/Maximum Query
**Link:** https://leetcode.com/problems/largest-rectangle-in-histogram/

## Approach
Goal:
For every bar, find the maximum width where
that bar can remain the minimum height.

Observation:
A smaller bar determines the boundary.

Need:
previous smaller + next smaller

Pattern:
monotonic increasing stack

Area:
height[i] × width

Approach-
just the important part is finding width that you get using monotonic stack.


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
