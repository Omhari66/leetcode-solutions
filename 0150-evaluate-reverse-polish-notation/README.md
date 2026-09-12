# 150. Evaluate Reverse Polish Notation

**Difficulty:** 🟡 Medium
**Topics:** Array, Math, Stack
**Link:** https://leetcode.com/problems/evaluate-reverse-polish-notation/

## Approach
we uses backtracking to generate all the parenthesis so we use recursion.
base case is if open and close parentheseis become equal to n then push the string that you have build into ans vecotor.
recursive case are like if open < n then add the ( open parenthesis to the currrent string and  increment the open and all same.
second recursive case-
we will only add closing ) when close<open then add the ) into current string and increment close and all same.

## Complexity
- **Time:** O(4^n)
- **Space:** O(n)


**Patterns used:** `Backtracking`

---
_Synced automatically by LeetCode → GitHub Sync._
