# 287. Find the Duplicate Number

**Difficulty:** 🟡 Medium
**Topics:** Array, Two Pointers, Binary Search, Bit Manipulation, Pigeonhole Principle, Floyd's Cycle Finding Algorithm
**Link:** https://leetcode.com/problems/find-the-duplicate-number/

## Approach
So we are using slow and fast to find the duplicate the magical thing is we are doing this in array.
we point slow to nums[0] and fast as nums[nums[0]] then we iterate till  both becom equal after they becom equal fast will get  into a cycle but that not our answer.
Then we point slow to 0 means outside and iterate both now same like slow=nums[slow] and fast=nums[fast]. 
In the end when both again become equal they point to duplicate.
The first meeting point only tells us that a cycle exists.
Floyd's algorithm says:
Treat each value as the next index.
Array values → treat as next pointers
             ↓
Duplicate → creates a cycle
             ↓
Slow + Fast → find a meeting point
             ↓
Reset slow to 0
             ↓
Move both 1 step
             ↓
Meeting point = duplicate

## Complexity
- **Time:** O(n)
- **Space:** O(1)


**Patterns used:** `Linked List` `Two Pointers`

---
_Synced automatically by LeetCode → GitHub Sync._
