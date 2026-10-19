# Number of Islands

[View on LeetCode](https://leetcode.com/problems/number-of-islands/)

**Difficulty:** 🟡 Medium
**Tags:** Graph

---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(mxn)
- **Space Complexity:** O(n)

our initution is if you found the land then make all it adjacent land water so that it won't count for another island.



---

## Approach: Optimal

⏱️ **Time Spent:** 20min

- **Time Complexity:** O(RxC)
- **Space Complexity:** O(RxC)

we need to find the maximum area of island.
we will use same way of traversing to island as we use in no. of island.
As matrix is given we traverse it in the same way and if land is there then enter into dfs and this time dfs will return the area.

In no. of island question we only need to find the island so we count the island where we found the first 1 bcz dfs was making adacent land to 0.

we did the same just count 1+dfs(l,r,top,bottom)


\text{maxArea}=\max(\text{maxArea},\text{currentArea})


---