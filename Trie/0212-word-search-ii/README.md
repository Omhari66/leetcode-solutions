# Word Search II

[View on LeetCode](https://leetcode.com/problems/word-search-ii/)

**Difficulty:** 🔴 Hard
**Tags:** Trie

---

## Approach: OPTIMAL

⏱️ **Time Spent:** 30min

- **Time Complexity:** O(RC 4.3^{L-1}))
- **Space Complexity:** O(?)

We are given a 2D character board and a list of words. Our task is to return all words that can be formed by moving horizontally or vertically between adjacent cells. We cannot reuse a cell within the same word.
Brute-force approach: We could perform DFS separately for every word. However, this repeats searches for common prefixes, making it inefficient.
Optimised approach: Trie + DFS + Backtracking
First, we insert all words into a Trie. Each node has up to 26 children representing lowercase English letters. Words with common prefixes share the same Trie path, and a terminal node stores the completed word.
Then, we start DFS from every cell in the board.
1. Check the board boundaries and whether the cell is already visited.
2. Find the matching child in the Trie using the current board character.
3. If no matching child exists, stop exploring that path.
4. If a complete word is found, add it to the answer and clear the stored word to avoid duplicates.
5. Mark the current cell as visited.
6. Explore all four adjacent cells using the updated Trie node.
7. Restore the cell after exploration (backtracking).
Finally, return the collected words.


Complexity
- Trie construction: \(O(S)\), where \(S\) is the total number of characters across all words.
- DFS worst-case upper bound: \(O(RC \cdot 4 \cdot 3^{L-1})\), where \(L\) is the maximum word length, capped by the number of board cells.
- Space: \(O(S + \min(L,RC))\) for the Trie and recursive DFS stack, excluding the output

---