## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to keep track of opening brackets. Whenever a closing bracket is encountered, I check whether it matches the most recent opening bracket. The string is valid only when all brackets are correctly matched.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution checks round, square, and curly brackets. I tested it locally with a valid bracket sequence and an invalid bracket sequence before submitting it to LeetCode.