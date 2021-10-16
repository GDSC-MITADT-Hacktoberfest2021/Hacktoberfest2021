
# Backtracking Medium Questions





### Question 1

Given an integer N representing the number of pairs of parentheses, the task is to generate all combinations of well-formed(balanced) parentheses.
Input:
N = 3

Output:
((()))
(()())
(())()
()(())
()()()

Input:
N = 1

Output:
()

Expected Time Complexity: O(2N * N).
Expected Auxiliary Space: O(2*N*X), X = Number of valid Parenthesis.

### Question 2
Given an array of integers and a sum B, find all unique combinations in the array where the sum is equal to B. The same number may be chosen from the array any number of times to make B.

Note:
        1. All numbers will be positive integers.
        2. Elements in a combination (a1, a2, …, ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
        3. The combinations themselves must be sorted in ascending order.

Input:
N = 4
arr[] = {7,2,6,5}
B = 16

Output:

(2 2 2 2 2 2 2 2)

(2 2 2 2 2 6)

(2 2 2 5 5)

(2 2 5 7)

(2 2 6 6)

(2 7 7)

(5 5 6)


Input:
N = 4
arr[] = {7,2,6,5}
B = 16

Output:

(2 2 2 2 2 2 2 2)

(2 2 2 2 2 6)

(2 2 2 5 5)

(2 2 5 7)

(2 2 6 6)

(2 7 7)

(5 5 6)
