
# Tree Medium Questions





### Question 1
Given a binary tree, find its height.


Example 1:

    Input:
      1
    /  \
    2    3
    Output: 2
Example 2:

    Input:
    2
    \
     1
    /
    3
    Output: 3   

### Question 2
Given a Binary Tree with all unique values and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them is present. 

Example 1:

    Input:
    n1 = 2 , n2 =  3
      1
    /  \
    2    3
    Output: 1
    Explanation:
    LCA of 2 and 3 is 1.
Example 2:

    Input:
    n1 = 3 , n2 = 4
            5
            /
          2
        /  \
        3    4
    Output: 2
    Explanation: 
    LCA of 3 and 4 is 2. 
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of Tree).

### Question 3
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example 1:

    Input:
    T:      1          S:   3
        /   \            /
       2     3          4
    /  \    /
    N    N  4
    Output: 1 
    Explanation: S is present in T

Example 2:

    Input:
    T:      26         S:   26
        /   \           /  \
      10     N        10    N
    /    \           /  \
    20    30        20  30
    /  \            /  \
    40   60         40  60
    Output: 1 
    Explanation: 
    S and T are both same. Hence, 
    it can be said that S is a subtree 
    of T.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).