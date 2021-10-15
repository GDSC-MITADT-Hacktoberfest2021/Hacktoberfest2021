
# Binary Search Hard Questions





### Question 1
Implement pow(x, n) % M.
In other words, given x, n and M, find (xn) % M.

Input:
x = 3, n = 2, m = 4

Output:
1

Explanation:
32 = 9. 9 % 4 = 1.

Input:
x = 2, n = 6, m = 10

Output:
4

Explanation:
26 = 64. 64 % 10 = 4.

Expected Time Complexity: O(log(n))
Expected Space Complexity: O(1)
### Question 2
Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.

Input: n = 6 

arr[] = {0900, 0940, 0950, 1100, 1500, 1800}

dep[] = {0910, 1200, 1120, 1130, 1900, 2000}

Output: 3

Explanation: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.


Input: n = 3

arr[] = {0900, 1100, 1235}

dep[] = {1000, 1200, 1240}

Output: 1

Explanation: Only 1 platform is required to 
safely manage the arrival and departure 
of all trains. 

### Question 2

Given N candies and K people. In the first turn, the first person gets 1 candy, the second gets 2 candies, and so on till K people. In the next turn, the first person gets K+1 candies, the second person gets K+2 candies and so on. If the number of candies is less than the required number of candies at every turn, then the person receives the remaining number of candies. Find the total number of candies every person has at the end.

Input:
N = 7, K = 4

Output:
1 2 3 1

Explanation:
At the first turn, the fourth person
has to be given 4 candies, but there is
only 1 left, hence he takes only one. 

Input:
N = 10, K = 3

Output :
5 2 3

Explanation:
At the second turn first one receives
4 and then we have no more candies left. 