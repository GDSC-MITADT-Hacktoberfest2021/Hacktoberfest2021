
# Mathmetics Hard Questions



### Question 1
Given N non-negative integers a1,a2,....an where each represents a point at coordinate (i, ai). N vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i,0). Find two lines, which together with x-axis forms a container, such that it contains the most water.

Example 1:

Input:
N = 4
a[] = {1,5,4,3}

Output: 6

Explanation: 5 and 3 are distance 2 apart.
So the size of the base = 2. Height of
container = min(5, 3) = 3. So total area
= 3 * 2 = 6.

Example 2:

Input:
N = 5
a[] = {3,1,2,4,5}

Output: 12

Explanation: 5 and 3 are distance 4 apart.
So the size of the base = 4. Height of
container = min(5, 3) = 3. So total area
= 4 * 3 = 12.


### Question 2
Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs.

NOTE: A solution will always exist, read Goldbach’s conjecture. 

Example 1:

Input: N = 74

Output: 3 71

Explaination: There are several possibilities 
like 37 37. But the minimum value of this pair 
is 3 which is smallest among all possible 
minimum values of all the pairs.

Example 2:

Input: 4

Output: 2 2

Explaination: This is the only possible 
prtitioning of 4.

Expected Time Complexity: O(N*log(logN))
Expected Auxiliary Space: O(N)