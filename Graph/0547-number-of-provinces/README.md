# Number of Provinces

[View on LeetCode](https://leetcode.com/problems/number-of-provinces/)

**Difficulty:** 🟡 Medium
**Tags:** Graph

---

## Approach: Optimal

⏱️ **Time Spent:** 30min

- **Time Complexity:** O(n^2)
- **Space Complexity:** O(n)

**Approach: Number of Provinces (DFS)**

Treat each city as a node in an undirected graph. The adjacency matrix represents connections between cities. Create a `visited` array, initially filled with zeros, and initialise `provinces = 0`. Iterate through every city. If a city is unvisited, increment the province count and start DFS. Mark each visited city and recursively explore all connected, unvisited neighbours. This ensures that every city in the same province, including indirectly connected cities, is visited. Skip already visited cities to avoid counting a province more than once. Finally, return the total province count.

**Time Complexity:** \(O(n^2)\), since the adjacency matrix requires scanning up to \(n\) entries for each of \(n\) cities.

**Space Complexity:** \(O(n)\) for the visited array and the DFS recursion stack.

---