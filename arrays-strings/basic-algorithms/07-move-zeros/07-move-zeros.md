## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I use a position pointer to keep track of where the next non-zero element should be placed. Each non-zero element is moved to that position, while the remaining elements naturally become zero.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution moves all zeroes to the end while maintaining the relative order of the non-zero elements. I tested it locally with a normal case and an edge case containing only zeroes.