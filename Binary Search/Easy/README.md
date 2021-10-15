
# Binary Search easy Questions





### Question 1
Given an array of unsorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Input : Arr[] = {1, 3, 6, 7} and K = 4

Output : 3

Explanation:
We have an array [1, 3, 6, 7] and target is 4.
If we look at the absolute difference of target 
with every element of an array we will 
get [ |1-4|, |3-4|, |6-4|, |7-4| ]. 
So, the closest number is 3.

Input : Arr[] = {1, 2, 3, 5, 6, 8, 9}, K = 4

Output : 5

### Question 2

Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Input:
N = 2 , X = 3

arr[] = { 1, 3, 3, 4 }

Output:
1 2

Explanation:
For the above array, first occurence
of X = 3 is at index = 1 and last
occurence is at index = 2.

Input:
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }

Output:
-1

Explanation: 
As 5 is not present in the array,
so the answer is -1.

### Question 3
Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].

Input:
m = 6, n = 6

arr1[] = {1,2,3,4,7,9}

arr2[] = {0,1,2,1,1,4}

Output: 4 5 5 6 6 6

Explanation: Number of elements less than
or equal to 1, 2, 3, 4, 7, and 9 in the
second array are respectively 4,5,5,6,6,6


Input:
m = 5, n = 7

arr1[] = {4 8 7 5 1}

arr2[] = {4,48,3,0,1,1,5}

Output: 5 6 6 6 3