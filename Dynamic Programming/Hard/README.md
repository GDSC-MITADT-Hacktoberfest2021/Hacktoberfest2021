
# Dynamic Programming Hard Questions


### Question 1
You are given N identical eggs and you have access to a K-floored building from 1 to K.

There exists a floor f where 0 <= f <= K such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break. There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.
Return the minimum number of moves that you need to determine with certainty what the value of f is.

For more description on this problem see wiki page

Example 1:

Input:
N = 1, K = 2

Output: 2

Explanation: 

1. Drop the egg from floor 1. If it 
   breaks, we know that f = 0.

2. Otherwise, drop the egg from floor 2.
   If it breaks, we know that f = 1.

3. If it does not break, then we know f = 2.

4. Hence, we need at minimum 2 moves to
   determine with certainty what the value of f is.

Example 2:

Input:
N = 2, K = 10

Output: 4


### Question 2
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

Example 1:

Input:
N = 3
W = 4

values[] = {1,2,3}
weight[] = {4,5,1}

Output: 3

Example 2:

Input:
N = 3
W = 3

values[] = {1,2,3}
weight[] = {4,5,6}

Output: 0


