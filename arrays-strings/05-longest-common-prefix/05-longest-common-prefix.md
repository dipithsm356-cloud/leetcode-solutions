## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compare the first string with each of the other strings character by character. The prefix length is reduced whenever the characters do not match, leaving the longest common prefix shared by all strings.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the solution locally with a case where a common prefix exists and a case where there is no common prefix. The solution was then submitted to LeetCode and accepted.