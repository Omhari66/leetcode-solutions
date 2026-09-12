# 150. Evaluate Reverse Polish Notation

**Difficulty:** 🟡 Medium
**Topics:** Array, Math, Stack
**Link:** https://leetcode.com/problems/evaluate-reverse-polish-notation/

## Approach
We traverse all the characters in the string from left to right.

* If the character is `(`, we increment `balance` and add the character to `result`.
* If the character is `)` and `balance > 0`, it has a matching `(`, so we decrement `balance` and add `)` to `result`.
* If the character is `)` and `balance == 0`, it has no matching `(`, so we skip it.
* If the character is not a parenthesis, we simply add it to `result`.

After the first pass, there can still be extra `(` because they may not have a matching `)`.

Therefore, we traverse the resulting string from right to left. If we find an extra `(` while `balance > 0`, we skip it and decrement `balance`.

Because we are building the answer while traversing backward, the resulting string is reversed. Therefore, we reverse it at the end.

This gives us a valid string with the minimum number of parentheses removed.

## Complexity
- **Time:** O(n)
- **Space:** O(n)


**Patterns used:** `Stack/Queue`

---
_Synced automatically by LeetCode → GitHub Sync._
