# Kth Largest Element in a Stream

[View on LeetCode](https://leetcode.com/problems/kth-largest-element-in-a-stream/)

**Difficulty:** 🟢 Easy
**Tags:** Heap

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** O(n log k) add() log k
- **Space Complexity:** O(k)

We need to continuously find the kth largest element as new values are added to the stream.

I use a **min heap of size k**.

- Store `k` as a member variable because it is needed across multiple `add()` calls.
- Store a min heap as a member variable so it persists between calls.
- In the constructor, insert all elements from `nums` into the heap.
- If the heap size becomes greater than `k`, remove the smallest element.
- For every `add(val)` call, insert `val` into the heap.
- Again, if the heap size exceeds `k`, remove the smallest element.
- The heap now contains the `k` largest elements seen so far.
- Since it is a min heap, the smallest element among those `k` elements is the **kth largest**, so `pq.top()` is the answer.

**Time Complexity:** `O(n log k)` for initialization and `O(log k)` for each `add()` operation.

**Space Complexity:** `O(k)`.

---