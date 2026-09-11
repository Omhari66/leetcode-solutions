# 20. Valid Parentheses

**Difficulty:** 🟢 Easy
**Topics:** String, Stack, Bracket Sequences
**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach
First, I did this question using hashmap I store the closing bracket as key and then traverse the string if that character is not equal to mp key then it a opening bracket so push it to stack.
else it's a closing bracket so we compare the top of it with the value of mp key if both same then pop it and in the end of our stack is empty we return true.
it was taking O(n) and (n) tc and sc.
Better approach we can avoid extra space we can directly check if character is opening like '(' then we push the closing bracket and else we compare if it not opening then it should match with the top of stack. else same

## Complexity
- **Time:** O(n)
- **Space:** O(1)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
