# Rotting Oranges

[View on LeetCode](https://leetcode.com/problems/rotting-oranges/)

**Difficulty:** 🟡 Medium
**Tags:** Graph

---

## Approach: Optimal

⏱️ **Time Spent:** 20

- **Time Complexity:** O(R x C)
- **Space Complexity:** O(R+c)

So what we did in this we need to make all the frsh mangoes to rooted if they are adjacent.
for that we need to count the minute it take so for this we will use BFS traversal bcz it easy to count min for each level otherwise in DFS it will traverse fully.
we traverse the matrix and if found frsh then store that into queue with there i,j as pair and pop in u and v>
but the thing we need to travel adjacent for that we create an array for dr,dr in that store the index for row and column.
then first countthe all fresh and then traver if found make it rootes as==2 and insert into queue. and subtract fresh count in last if no fresh then return minute else -1;



“I'll use multi-source BFS because all initially rotten oranges spread rot simultaneously. I'll insert their coordinates into a queue and count the fresh oranges. Then I'll process the queue level by level, checking the four adjacent cells using direction arrays. Whenever a fresh orange is found, I'll mark it rotten, add it to the queue, and decrease the fresh count. I'll increment the time for each level in which rot spreads. Finally, if no fresh oranges remain, I'll return the elapsed time; otherwise, I'll return -1.”

---