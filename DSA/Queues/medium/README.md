
# Queue Medium Questions



### Question 1
Suppose there is a circle. There are N petrol pumps on that circle. You will be given two sets of data.

1. The amount of petrol that every petrol pump has.

2. Distance from that petrol pump to the next petrol pump.
Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.
Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.

Example 1:

Input:
N = 4

Petrol = 4 6 7 4
Distance = 6 5 3 5

Output: 1

Explanation: There are 4 petrol pumps with
amount of petrol and distance to next
petrol pump value pairs as {4, 6}, {6, 5},
{7, 3} and {4, 5}. The first point from
where truck can make a circular tour is
2nd petrol pump. Output in this case is 1
(index of 2nd petrol pump).

### Question 2
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example 1:

Input:
N = 9, K = 3

arr[] = 1 2 3 1 4 5 2 3 6

Output: 
3 3 4 5 5 5 6 

Explanation: 

1st contiguous subarray = {1 2 3} Max = 3

2nd contiguous subarray = {2 3 1} Max = 3

3rd contiguous subarray = {3 1 4} Max = 4


4th contiguous subarray = {1 4 5} Max = 5

5th contiguous subarray = {4 5 2} Max = 5

6th contiguous subarray = {5 2 3} Max = 5

7th contiguous subarray = {2 3 6} Max = 6

Example 2:

Input:
N = 10, K = 4

arr[] = 8 5 10 7 9 4 15 12 90 13

Output: 
10 10 10 15 15 90 90

Explanation: 

1st contiguous subarray = {8 5 10 7}, Max = 10

2nd contiguous subarray = {5 10 7 9}, Max = 10

3rd contiguous subarray = {10 7 9 4}, Max = 10

4th contiguous subarray = {7 9 4 15}, Max = 15


5th contiguous subarray = {9 4 15 12}, 
Max = 15

6th contiguous subarray = {4 15 12 90},
Max = 90

7th contiguous subarray = {15 12 90 13}, 
Max = 90