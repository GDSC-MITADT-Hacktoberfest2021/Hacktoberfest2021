
# Stack Medium Questions





### Question 1
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

Example 1:

    Input: 
    N = 7, price[] = [100 80 60 70 60 75 85]
    Output:
    1 1 1 2 1 4 6
    Explanation:
    Traversing the given input span for 100 
    will be 1, 80 is smaller than 100 so the 
    span is 1, 60 is smaller than 80 so the 
    span is 1, 70 is greater than 60 so the 
    span is 2 and so on. Hence the output will 
    be 1 1 1 2 1 4 6.
Example 2:

    Input: 
    N = 6, price[] = [10 4 5 90 120 80]
    Output:
    1 1 2 4 5 1
    Explanation:
    Traversing the given input span for 10 
    will be 1, 4 is smaller than 10 so the 
    span will be 1, 5 is greater than 4 so 
    the span will be 2 and so on. Hence, the 
    output will be 1 1 2 4 5 1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

### Question 2

A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
 

Example 1:

    Input:
    N = 3
    M[][] = {{0 1 0},
            {0 0 0}, 
            {0 1 0}}
    Output: 1
    Explanation: 0th and 2nd person both
    know 1. Therefore, 1 is the celebrity. 

Example 2:

    Input:
    N = 2
    M[][] = {{0 1},
            {1 0}}
    Output: -1
    Explanation: The two people at the party both
    know each other. None of them is a celebrity.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

### Question 3
Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

Example 1:

    Input: 
    N = 4, arr[] = [1 3 2 4]
    Output:
    3 4 4 -1
    Explanation:
    In the array, the next larger element 
    to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
    since it doesn't exist, it is -1.
Example 2:

    Input: 
    N = 5, arr[] [6 8 0 1 3]
    Output:
    8 -1 1 3 -1
    Explanation:
    In the array, the next larger element to 
    6 is 8, for 8 there is no larger elements 
    hence it is -1, for 0 it is 1 , for 1 it 
    is 3 and then for 3 there is no larger 
    element on right and hence -1.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)