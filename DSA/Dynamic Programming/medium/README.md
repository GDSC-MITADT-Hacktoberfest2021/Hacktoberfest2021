
# Dynamic Programming Medium Questions


### Question 1
You are given an amount denoted by value. You are also given an array of coins. The array contains the
denominations of the give coins. You need to find the minimum number of coins to make the change for value using the coins of given denominations. Also, keep in mind that you have infinite supply of the coins.

Example 1:

Input:

value = 5
numberOfCoins = 3
coins[] = {3,6,3}

Output: Not Possible

Explanation:We need to make the change for
value = 5 The denominations are {3,6,3}
It is certain that we cannot make 5 using
any of these coins.

Example 2:

Input:

value = 10
numberOfCoins = 4
coins[] = {2 5 3 6}

Output: 2

Explanation:We need to make the change for
value = 10 The denominations are {2,5,3,6}
We can use two 5 coins to make 10. So
minimum coins are 2.


### Question 2

There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

Example 1:

Input:
n = 4

Output: 5

Explanation:
You can reach 4th stair in 5 ways.

Way 1: Climb 2 stairs at a time.

Way 2: Climb 1 stair at a time.

Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.

Way 4: Climb 1 stair, then 2 stairs
then 1 stair.

Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.

Example 2:

Input:
n = 10

Output: 89 

Explanation: 
There are 89 ways to reach the 10th stair.


### Question 3

Find nCr for given n and r.

Example 1:

Input:
n = 3, r = 2

Output: 3

Example 2:

Input:
n = 4, r = 2

Output: 6
