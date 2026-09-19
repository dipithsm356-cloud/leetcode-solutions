# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency-counting approach to compare the characters in both strings. I increment the count for each character in the first string and decrement it for each character in the second string. If all counts are zero, the two strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution uses a fixed-size frequency array for lowercase English letters. I tested the solution locally with an anagram case and a non-anagram case before submitting it to LeetCode.