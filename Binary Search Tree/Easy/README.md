
# Binary Search Tree Easy Questions


### Question 1
Given a Binary Search Tree and a node value X, find if node with value X is present in the BST or not. 

Input:

         2
          \
          81
        /    \
      42      87
    /   \       \
    45   66      90

x = 87



Output: 1

Explanation: As 87 is present in the
given nodes , so the output will be
1.


Input:

      6
       \
        7
       / \
      8   9
x = 11

Output: 0

Explanation: As 11 is not present in 
he given nodes , so the output will
be 0.


### Question 2
Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact.
Input:

      1
    /   \
    2     3

Output: 1 2 3


Input:

          1
       /    \
     2       3
   /        
 4       

Output: 1 2 3 4
Explanation:
The converted BST will be

        3
      /   \
    2     4
  /
 1


 ### Question 3
 Given postorder traversal of a Binary Search Tree, you need to construct a BST from postorder traversal. The output will be inorder traversal of the constructed BST.

 Input:
6
1 7 5 50 40 10

Output:
1 5 7 10 40 50

Explanation:
Testcase 1: The BST for the given post order traversal is:


Thus the inorder traversal of BST is: 1 5 7 10 40 50.
 


Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(Height of the BST)

### Question 4
Given a Binary Search Tree, find the sum of all leaf nodes. BST has the following property (duplicate nodes are possible):

The left subtree of a node contains only nodes with keys less than the node’s key.

The right subtree of a node contains only nodes with keys greater than or equal to the node’s key.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case consists of integer N, denoting the number of elements in the BST. The second line of each test case consists of N space-separated integers denoting the elements in the BST.

Output:

For each testcase, in a new line, print the sum of leaf nodes.

Input:
2
6
67 34 82 12 45 78
1
45
Output:
135
45

Explanation:
In first test case, the BST for the given input will be-


               67
            /    \
          34      82
        /    \     /           
       12    45   78
         

Hence, the required sum= 12 + 45 + 78 = 135