# Find the Highest Altitude

[View on LeetCode](https://leetcode.com/problems/find-the-highest-altitude/)

**Difficulty:** 🟢 Easy
**Tags:** None

---

## Approach: Optimal

⏱️ **Time Spent:** 10min

- **Time Complexity:** o(n)
- **Space Complexity:** O(n)

so we need to find the highest altitude and we got hint that highest altitude would be the prefix sum you calculate.
one more constraint was n+1 it the case of zero in prefix sum-
we know prefix[i+1]=prefix[i-1]+arr[i] and we created the vector of size n+1

---