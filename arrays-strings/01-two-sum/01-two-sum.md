# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

I used a brute-force approach to check every possible pair of elements in the array. For each pair, I check whether their sum is equal to the target. When a matching pair is found, I return their indices.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The solution must not use the same array element twice. I tested the solution locally with a normal case and a duplicate-value case before submitting it to LeetCode.