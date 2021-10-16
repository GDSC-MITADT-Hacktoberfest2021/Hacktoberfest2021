
# Arrays Hard Questions





### Question 1
Given two sorted arrays, the task is to merge them in a sorted manner.
Examples: 

Input:
arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: 
arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8}

Output: arr3[] = {4, 5, 7, 8, 8, 9} 

Expected Time Complexity: O( nlog(n) + mlog(m) ) 
Expected Auxiliary Space: O(N)
### Question 2
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum

Input:
N = 5
Arr[] = {1,2,3,-2,5}

Output:
9

Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.


Input:
N = 4
Arr[] = {-1,-2,-3,-4}

Output:
-1

Explanation:
Max subarray sum is -1 
of element (-1)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

### Question 3
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Input:

N = 5
arr[] = {1,2,3,4,5}

Output: 6

Explanation: Smallest positive missing 
number is 6.

Input:

N = 5
arr[] = {0,-10,1,3,-20}

Output: 2

Explanation: Smallest positive missing 
number is 2.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
### Question 4

Given an unsorted array arr[] of n positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles. 

Input:

n = 3
arr[] = {3, 5, 4}

Output: 
1

Explanation: 
A triangle is possible 
with all the elements 5, 3 and 4.

Input: 

n = 5
arr[] = {6, 4, 9, 7, 8}

Output: 
10

Explanation: 
There are 10 triangles
possible  with the given elements like
(6,4,9), (6,7,8),...
### Question 5
Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

Input
m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}

Output: 5

Explanation: The middle element for
{1,2,3,5,6,7,9} is 5

Input:

m = 2, n = 4
array1[] = {4,6}
array2[] = {1,2,3,5}

Output: 3.5

Expected Time Complexity: O(min(log n, log m)).
Expected Auxiliary Space: O((n+m)/2).




## Authors

- [@sgr12](https://github.com/sgr12-coader)