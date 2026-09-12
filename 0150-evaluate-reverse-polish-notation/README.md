# 150. Evaluate Reverse Polish Notation

**Difficulty:** 🟡 Medium
**Topics:** Array, Math, Stack
**Link:** https://leetcode.com/problems/evaluate-reverse-polish-notation/

## Approach
Most know use case of Stack to implement an expression evaluator.
What do we do if the token is not an operator? Then implement the operation by popping two numbers. 
else it's a number push to stack.

## Complexity
- **Time:** O(n)
- **Space:** O(n)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
