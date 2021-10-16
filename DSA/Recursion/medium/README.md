
# Recursion Medium Questions





### Question 1
The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Example 1:

Input:
N = 2

Output:

    move disk 1 from rod 1 to rod 2
    move disk 2 from rod 1 to rod 3
    move disk 1 from rod 2 to rod 3
    3
Explanation: For N=2 , steps will be
as follows in the example and total
3 steps will be taken.
Example 2:

Input:
N = 3

Output:

    move disk 1 from rod 1 to rod 3
    move disk 2 from rod 1 to rod 2
    move disk 1 from rod 3 to rod 2
    move disk 3 from rod 1 to rod 3
    move disk 1 from rod 2 to rod 1
    move disk 2 from rod 2 to rod 3
    move disk 1 from rod 1 to rod 3
    7

Explanation: For N=3 , steps will be
as follows in the example and total
7 steps will be taken.


### Question 2
Imagine you have a special keyboard with the following keys: 

    Key 1:  Prints 'A' on screen
    Key 2: (Ctrl-A): Select screen
    Key 3: (Ctrl-C): Copy selection to buffer
    Key 4: (Ctrl-V): Print buffer on screen appending it after what has already been printed.

Find maximum numbers of A's that can be produced by pressing keys on the special keyboard N times. 


Example 1:

    Input: N = 3

    Output: 3

    Explaination: Press key 1 three times.

    Example 2:

    Input: N = 7

    Output: 9

    Explaination: The best key sequence is 
    key 1, key 1, key 1, key 2, key 3,
    key4, key 4.


### Question 3
Given an integer N, print all the N digit numbers in increasing order, such that their digits are in strictly increasing order(from left to right).

Example 1:

    Input:
    N = 1
    Output:
    0 1 2 3 4 5 6 7 8 9
    Explanation:
    Single digit numbers are considered to be 
    strictly increasing order.

Example 2:

    Input:
    N = 2
    Output:
    12 13 14 15 16 17 18 19 23....79 89
    Explanation:
    For N = 2, the correct sequence is
    12 13 14 15 16 17 18 19 23 and so on 
    up to 89.