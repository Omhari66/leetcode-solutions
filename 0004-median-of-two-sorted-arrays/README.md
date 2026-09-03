# 4. Median of Two Sorted Arrays

**Difficulty:** 🔴 Hard
**Topics:** Array, Binary Search, Divide and Conquer
**Link:** https://leetcode.com/problems/median-of-two-sorted-arrays/

## Approach
We can solve this question using 3 ways the bruteforce is very simple we will merge both arrays then if it's odd then return the mid values; otherwise mid-1 and mid avg of both.TC-O(m+n) SC O(m+n)
Better Approach use two pointers and merge them and then rest do the same it save space but TC will same.
Optimal we will use binary search and split it in two partitions we will find total left as m+n+1/2 so we need atleast that much element on the left side.
we will find boundaries then compare them if partion is correct and it's odd then return max(left1, left2)else  do avg of max of left1,left2 and min of right1,right2. Otherwise move the left and right.

## Complexity
- **Time:** min(log(m,n))
- **Space:** O(1)


**Patterns used:** `Binary Search`

---
_Synced automatically by LeetCode → GitHub Sync._
