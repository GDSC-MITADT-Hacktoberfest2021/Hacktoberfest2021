
# Dynamic Programming Easy Questions


### Question 1
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5

Example 2:

Input:
N = 7
Output: 1 1 2 3 5 8 13


### Question 2
Given a number N. The task is to find the Nth catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …
Note: Positions start from 0 as shown above.

Example 1:

Input:
N = 5
Output: 42

Example 2:

Input:
N = 4
Output: 14

### Question 3

You have an infinite supply of coins, each having some value. Find out the number of ways to use the coins to sum-up to a certain required value.

Example 1:

Input:

value = 4
numberOfCoins = 3
coins[] = {1,2,3}

Output: 4

Explanation: We need to make the change
for value = 4. The denominations are
{1,2,3} Change for 4 can be made:
1+1+1+1
1+1+2
1+3
2+2
So, as it is evident, we can do this in
4 ways.

Example 2:

Input:

value = 10
numberOfCoins = 4
coins[] = {2,5,3,6}

Output: 5