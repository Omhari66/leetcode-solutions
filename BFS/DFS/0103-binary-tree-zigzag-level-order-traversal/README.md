# Binary Tree Zigzag Level Order Traversal

[View on LeetCode](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

**Difficulty:** 🟡 Medium
**Tags:** BFS/DFS

---

## Approach: Optmial

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

So in this question we need level order traversal in a zig-zag manner.
The core insight we found that zig-zag doing what just reversing the node when level is ODD.
SO we did the level order traversal using BFS and QUEUE and add a variable name as lev to calculate at which level we are and just traverse the order.

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

This question was to print alll the node whic are the rightmost side not just only right.
So we choose the BFS level wise traversal and simply where iteration become size-1 mean the last node then push into the ans.
if queue size is 3 then right most node is size-1.

---

## Approach: O(n)

⏱️ **Time Spent:** 15min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

We have given a root and subroot and we need to check whether they have same value and structure.
we already know how to check if two are same or not we can use helper method isSameTree(p,q).

recursively call isSubtree for root->left and root-.right

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n)
- **Space Complexity:** O(h)

we use a helper function to count the node with passing the maxV seen so far.
our base case was if root become null then return 0.
recursive case- root->val>=maxV gn=1 and updaate maxV.
the traverse gn+=left and right.

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n(
- **Space Complexity:** o(h)

so we need to calculate the diameter and we use the helper method to calculate the edges of left and right.
return 1+max(l,r) adding node from left and right then updating the max Diameter we found.

---