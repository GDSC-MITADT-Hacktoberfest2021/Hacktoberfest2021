
# Mathmetics Medium Questions



### Question 1
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

 

Example 1:

Input:
N = 2
arr[] = {1,0}

Output: 0 1

Explanation: 
arr[arr[0]] = arr[1] = 0.

arr[arr[1]] = arr[0] = 1.
 

Example 2:

Input:
N = 5
arr[] = {4,0,2,1,3}

Output: 3 4 2 0 1

Explanation: 
arr[arr[0]] = arr[4] = 3.

arr[arr[1]] = arr[0] = 4.
and so on.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


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

Expected Time Complexity : O(n)
Expected Auxiliary Space: O(1)
