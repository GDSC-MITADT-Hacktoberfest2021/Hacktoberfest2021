
# Binary Search Tree Medium Questions


### Question 1
Given a Binary Search Tree (BST) and a range l-h(inclusive), count the number of nodes in the BST that lie in the given range.

The values smaller than root go to the left side

The values greater and equal to the root go to the right side

  Input:

      10
     /  \
    5    50
    /   /   \
    1   40   100

l = 5, h = 45
Output: 3
Explanation: 5 10 40 are the node in the
range  

Input:

     5
    /  \
    4   6
    /      \
    3        7
l = 2, h = 8
Output: 5
Explanation: All the nodes are in the
given range.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(Height of the BST).


### Question 2

Given a Binary Search Tree and a node value X. Delete the node with the given value X from the BST. If no node with value x exists, then do not make any change.

Input:

      2
    /   \
    1     3
X = 12

Output: 1 2 3

Explanation: In the given input there
is no node with value 12 , so the tree
will remain same.

Input:

            1
             \
              2
                \
                 8 
               /    \
              5      11
            /  \    /  \
           4    7  9   12

X = 9
Output: 1 2 4 5 7 8 11 12
Explanation: In the given input tree after
deleting 9 will be

            1
              \
               2
                 \
                  8
                 /   \
                5     11
               /  \     \
              4    7     12

Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).

### Question 3
Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

     1
    /     \
    2       3
    /  \    /   \
    4    5  6   7

Top view will be: 4 2 1 3 7
Note: Return nodes from leftmost node to rightmost node.

  Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).

