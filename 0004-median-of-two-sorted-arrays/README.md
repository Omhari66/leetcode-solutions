# 4. Median of Two Sorted Arrays

**Difficulty:** 🔴 Hard
**Topics:** Array, Binary Search, Divide and Conquer
**Link:** https://leetcode.com/problems/median-of-two-sorted-arrays/

## Approach
"There are three approaches.

First, we can merge both sorted arrays and then find the median. This takes O(m+n) time and O(m+n) space.

Second, we can simulate the merge using two pointers without creating the merged array. We only track the elements around the median. This still takes O(m+n) time but reduces the space complexity to O(1).

The optimal approach uses binary search. We always perform binary search on the smaller array. We partition both arrays such that the total number of elements on the left is (m+n+1)/2.

For a chosen partition, we look at four boundary values: left1, right1, left2, and right2. The partition is valid when left1 <= right2 and left2 <= right1, because this guarantees that every element on the left is less than or equal to every element on the right.

If the total number of elements is odd, the median is max(left1,left2). If it is even, the median is the average of max(left1,left2) and min(right1,right2).

If left1 > right2, our partition in the first array is too far to the right, so we move right left. Otherwise, we move left right. Since we use binary search on the smaller array, the time complexity is O(log(min(m,n))) and the space complexity is O(1)."
## Complexity
- **Time:** min(log(m,n))
- **Space:** O(1)


**Patterns used:** `Binary Search`

---
_Synced automatically by LeetCode → GitHub Sync._
