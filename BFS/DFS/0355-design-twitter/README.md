# Design Twitter

[View on LeetCode](https://leetcode.com/problems/design-twitter/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

We have to find DEPTH=Root → Node
"How far down am I?"
for that use recursion if root null then return 0 otherwise go left and count same for right then return the max of both +1.

---

## Approach: optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

So we need to compare two binary tree and findout if they are the same of not.
So for that if they are same, we need to check these conditions-
Are these two nodes the same?
        ↓
1. Are both NULL? → yes
2. Is only one NULL? → no
3. Are their values different? → no
4. Otherwise:
      compare their left children
      AND
      compare their right children

---

## Approach: optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

We need to check if the tree is mirror of itself or not also known as symmetric.
so we use helper methof mirror and in that we send root left and right.
if left of left ==right of right and right of left and left of right same then it a mirror.

---

## Approach: Optmial

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

we need to invert the tree mean root->left become right and vice-versa.
for that first save left node and explore left of tree and same for ritht.
then just root->left=left and root->right=right;
Same Tree       → O(n) time, O(h) space
Symmetric Tree  → O(n) time, O(h) space
Invert Tree     → O(n) time, O(h) space
Max Depth       → O(n) time, O(h) space

---