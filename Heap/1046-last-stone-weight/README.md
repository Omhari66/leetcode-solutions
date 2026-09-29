# Last Stone Weight

[View on LeetCode](https://leetcode.com/problems/last-stone-weight/)

**Difficulty:** 🟢 Easy
**Tags:** Heap

---

## Approach: optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(n log k)
- **Space Complexity:** O(k)

In simple terms, we have to find the smallest point near the centre so first we calculated the distance from the origin and store it iin the max heap.
we use max heap and if size>k then pop, meaning only the k smallest will be push .
so we use a pair to push distance and index and then return the top index points. 

---