
# Stack Hard Questions





### Question 1
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit, there will be N bars height of each bar will be given by the array arr.

Example 1:

    Input:
    N = 7
    arr[] = {6,2,5,4,5,1,6}
    Output: 12



Example 2:

    Input:
    N = 8
    arr[] = {7 2 8 9 1 3 6 5}
    Output: 16
    Explanation: Maximum size of the histogram 
    will be 8  and there will be 2 consecutive 
    histogram. And hence the area of the 
    histogram will be 8x2 = 16.

Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)

### Question 2
Given an integer array. The task is to find the maximum of the minimum of every window size in the array.
Note: Window size varies from 1 to the size of the Array.

Example 1:

    Input:
    N = 7
    arr[] = {10,20,30,50,10,70,30}
    Output: 70 30 20 10 10 10 10 
    Explanation: First element in output
    indicates maximum of minimums of all
    windows of size 1. Minimums of windows
    of size 1 are {10}, {20}, {30}, {50},
    {10}, {70} and {30}. Maximum of these
    minimums is 70. 
    Second element in output indicates
    maximum of minimums of all windows of
    size 2. Minimums of windows of size 2
    are {10}, {20}, {30}, {10}, {10}, and
    {30}. Maximum of these minimums is 30 
    Third element in output indicates
    maximum of minimums of all windows of
    size 3. Minimums of windows of size 3
    are {10}, {20}, {10}, {10} and {10}.
    Maximum of these minimums is 20. 
    Similarly other elements of output are
    computed.
Example 2:

    Input:
    N = 3
    arr[] = {10,20,30}
    Output: 30 20 10
    Explanation: First element in output
    indicates maximum of minimums of all
    windows of size 1.Minimums of windows
    of size 1 are {10} , {20} , {30}.
    Maximum of these minimums are 30 and
    similarly other outputs can be computed