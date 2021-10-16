
# Recursion Easy Questions





### Question 1
You are given a number n. You need to find the count of digits in n.

Example 1:

Input:
n = 1

Output: 1

Explanation: Number of digit in 1 is 1.

Example 2:

Input:
n  = 99999

Output: 5

Explanation:Number of digit in 99999 is 5

Expected Time Complexity: O(Logn).
Expected Auxiliary Space: O(Logn).

### Question 2
You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.

Example 1:

Input:
n = 1
Output:  1

Explanation: Digital root of 1 is 1

Example 2:

Input:
n = 99999

Output: 9

Explanation: Sum of digits of 99999 is 45
which is not a single digit number, hence
sum of digit of 45 is 9 which is a single
digit number.

Expected Time Complexity: O((Num of Digits)2).
Expected Auxiliary Space: O(Num of Digits).

### Question 3
Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
Take the set of integers

1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……

First, delete every second number, we get following reduced set.

1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………

Now, delete every third number, we get

1, 3, 7, 9, 13, 15, 19,….….

Continue this process indefinitely……

Any number that does NOT get deleted due to above process is called “lucky”.

Example 1:

Input:
N = 5

Output: 0

Explanation: 5 is not a lucky number 
as it gets deleted in the second 
iteration.

Example 2:

Input:
N = 19

Output: 1

Explanation: 19 is a lucky number