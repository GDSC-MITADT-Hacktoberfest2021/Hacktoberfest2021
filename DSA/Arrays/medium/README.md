
# Arrays Medium Questions





### Question 1
Given a binary array A[] of size N. The task is to arrange the array in increasing order.

Note: The binary array contains only 0  and 1.

Example 1:

Input:
N = 5 
A[] = {1,0,1,1,0}

Output: 0 0 1 1 1
Example 2:

Input:
N = 10
A[] = {1,0,1,1,1,1,1,0,0,0}

Output: 0 0 0 0 1 1 1 1 1 1
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

### Question 2
Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.

Example 1:

Input:
N = 5
A[] = {2,4,1,3,5}

Output: 3

Example 2:

Input:
N = 2
A[] = {10,2}

Output: -1

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)



### Question 3
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}

Output:
0 0 1 2 2

Explanation:
0s 1s and 2s are segregated 
into ascending order.

Example 2:

Input: 
N = 3
arr[] = {0 1 0}

Output:
0 0 1

Explanation:
0s 1s and 2s are segregated 
into ascending order.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

### Question 4
Boom numbers are numbers consisting only of digits 2 and 3. Given an integer K, display the K-th Boom number

Example 1:

Input:
K = 5

Output: 32

Explanation:
The Boom series is 2, 3, 22, 23, 32, 33, 222....
and, for K=5, answer = 32

Example 2:

Input:

K = 100

Output: 322323

Expected Time Complexity: O( log(K) )
Expected Auxiliary Space: O( log(K) )

### Question 5
Given an array of size n. The task is to find the longest subsequence such that absolute difference between adjacents is one.

Example 1:

Input : Arr[] = {10, 9, 4, 5, 4, 8, 6}

Output : 3

Explanation:
As longest subsequences with difference 1 
are, ("10, 9, 8"), ("4, 5, 4") and 
("4, 5, 6"). 

Example 2:

Input : Arr[] = {1, 2, 3, 2, 3, 7, 2, 1}

Output : 7

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).





## Authors

- [@sgr12](https://github.com/sgr12-coader)