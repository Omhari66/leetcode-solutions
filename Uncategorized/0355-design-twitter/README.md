# Design Twitter

[View on LeetCode](https://leetcode.com/problems/design-twitter/)

**Difficulty:** 🟡 Medium
**Tags:** None

---

## Approach: Optimal

⏱️ **Time Spent:** 40min

- **Time Complexity:** O(1) average for postTweet, follow, and unfollow; O((F + 10) log F) for getNewsFeed.
- **Space Complexity:** O(T + F)

We need to design Twitter using three main data structures. First, store each user's followees in an `unordered_map<int, unordered_set<int>>`. Second, store each user's tweets as `(timestamp, tweetId)` pairs so we can maintain chronological order. For `getNewsFeed`, include the user and everyone they follow. Put the newest tweet from each relevant user into a max heap as `(timestamp, userId, index)`. Repeatedly remove the newest tweet, add its tweet ID to the result, and then insert that user's next older tweet into the heap. Continue until we collect 10 tweets or the heap becomes empty.
postTweet() → O(1)
follow() / unfollow() → O(1) average
getNewsFeed() → O((F + 10) log F), where F is the number of users followed by the user (including themselves for the initial heap).
Space complexity → O(T + F), where T is the total number of stored tweets and F is the number of followed users.

---