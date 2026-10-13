# Design Add and Search Words Data Structure

[View on LeetCode](https://leetcode.com/problems/design-add-and-search-words-data-structure/)

**Difficulty:** 🟡 Medium
**Tags:** Trie, BFS/DFS

---

## Approach: Optimal

⏱️ **Time Spent:** 25min

- **Time Complexity:** O(26^L)
- **Space Complexity:** O(N.k)

We need to check whether the word exists in those word that you inserted.
constraint was the word can be search using dot like you inserted bad,mad,bat and word search is b.d there you need to return.

basic problem can be solved using hashmap or any ds we can insert and serarch.but when dot comes it become difficult.
so we uses TRIE ds to check word by word and compare the children node.
we uses dfs to check it consist three cases-
1st- when word index reaches the word size mean all word mathces bases case return true.
2nd- if node->children[idx] is not present means null then return false.
3rd-- wildcard to check dot
we use a for each loop for the complete children if that child is not null and all the word mathes use dfs then return true else false.
worst case-- when every character is dot then 26^L length of word for searching word
O(l)for adding and space O(26)

---