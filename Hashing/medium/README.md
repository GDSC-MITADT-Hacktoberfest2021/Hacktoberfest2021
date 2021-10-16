
# Hashing Medium Questions



### Question 1
Given an array containing 0s and 1s. Find the number of subarrays having equal number of 0s and 1s.

Example 1:

Input:

n = 7
A[] = {1,0,0,1,0,1,1}

Output: 8

Explanation: The index range for the 8 
sub-arrays are: (0, 1), (2, 3), (0, 3), (3, 4), 
(4, 5) ,(2, 5), (0, 5), (1, 6)

Example 2:

Input:

n = 5
A[] = {1,1,1,1,0}

Output: 1

Explanation: The index range for the 
subarray is (3,4).

### Question 2
Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

Example 1:

Input:

N = 5
A[] = {5,5,4,6,4}

Output: 4 4 5 5 6

Explanation: The highest frequency here is
2. Both 5 and 4 have that frequency. Now
since the frequencies are same then 
smallerelement comes first. So 4 4 comes 
firstthen comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.

Example 2:

Input:
N = 5
A[] = {9,9,9,2,5}

Output: 9 9 9 2 5

Explanation: The highest frequency here is
3. The element 9 has the highest frequency
So 9 9 9 comes first. Now both 2 and 5
have same frequency. So we print smaller
element first.
The output is 9 9 9 2 5.
