## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. I repeatedly check the middle element and eliminate half of the remaining search range based on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input array must be sorted for binary search to work correctly. I tested the solution locally with a case where the target exists and a case where the target is not present.