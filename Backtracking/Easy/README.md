
# Backtracking Easy Questions





### Question 1
Given a string S. The task is to print all permutations of a given string.

 Input: ABC

Output:
ABC ACB BAC BCA CAB CBA

Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .

Input: ABSG

Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
BASG BGAS BGSA BSAG BSGA GABS GASB 
GBAS GBSA GSAB GSBA SABG SAGB SBAG 
SBGA SGAB SGBA

Explanation:
Given string ABSG has 24 permutations.

Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)
### Question 2
Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. The output should be printed in sorted increasing order of strings

Input:
S = "ABC"

Output: (A B C)(A BC)(AB C)(ABC)

Explanation:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".

Input:
S = "AB"

Output: (A B)(AB)


Expected Time Complexity: O(2^n)
Expected Auxiliary Space: O(1)

