# Employee Free Time

[View on LeetCode](https://leetcode.com/problems/employee-free-time/)

**Difficulty:** 🔴 Hard
**Tags:** Heap

---

## Approach: Optimal

⏱️ **Time Spent:** 25min

- **Time Complexity:** O(log n)
- **Space Complexity:** O(n)

We need to find the median efficiently. The straightforward approach takes O(n log n) because we sort the array every time findMedian() is called. To avoid sorting repeatedly, we insert each new element in O(log n) and maintain two heaps.
We use a max heap for the left half and a min heap for the right half. The main challenge is deciding which heap to insert into and keeping both heaps balanced. If the number is less than or equal to the top of the max heap, we put it in the max heap; otherwise, we put it in the min heap. Then we rebalance the heaps if their sizes differ too much.
If the total number of elements is odd, the max heap contains one extra element, so its top is the median. If the total number is even, the median is the average of the tops of both heaps.

---