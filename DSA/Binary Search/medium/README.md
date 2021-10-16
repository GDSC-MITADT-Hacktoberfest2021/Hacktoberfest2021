
# Binary Search Medium Questions





### Question 1
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

Input:
x = 5

Output: 2

Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.


Input:
x = 4

Output: 2

Explanation: Since, 4 is a perfect 
square, so its square root is 2.

Note: Try Solving the question without using sqrt Function.

 

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)

### Question 2
Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Input:
R = 3, C = 3

M = 

    [[1, 3, 5], 

     [2, 6, 9], 

     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 


Input:
R = 3, C = 1
M = [[1], [2], [3]]

Output: 2

### Question 3
Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.

Input:
n = 1

Output: 5


Explanation : 5! = 120 which has at
least 1 trailing 0.

Input:
n = 6

Output: 25

Explanation : 25! has at least
6 trailing 0.

Expected Time Complexity: O(log2 N * log5 N).
Expected Auxiliary Space: O(1)