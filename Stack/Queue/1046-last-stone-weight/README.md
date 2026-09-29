# Last Stone Weight

[View on LeetCode](https://leetcode.com/problems/last-stone-weight/)

**Difficulty:** 🟢 Easy
**Tags:** Stack/Queue

---

## Approach: Optimal O(n log n) bcz log n take to push a element

⏱️ **Time Spent:** 15min

- **Time Complexity:** o(N LOG N)
- **Space Complexity:** o(n)

We need to choose the two heaviest stones and smash them. If they have the same weight, both are destroyed; otherwise, we insert the remaining weight back into the collection.
We could solve this using brute force by finding the largest and second-largest stones each time, but that would take O(n²) in total.
Another approach is to sort the stones, but after inserting the remaining stone, we would need to sort them again.
A better approach is to use a priority queue implemented as a max heap. We pop the two largest values, calculate their difference, and push the remaining value back into the heap. Since the maximum element is always at the top, we can efficiently get the two heaviest stones.

---