# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I keep track of the lowest stock price seen so far while scanning the array. For each price, I calculate the possible profit and update the maximum profit when a better value is found.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The stock must be bought before it is sold. I tested the solution locally with a case that produces a profit and a case where no profit is possible.