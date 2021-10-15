
# Binary Search Tree Hard Questions


### Question 1
You are given a Binary tree. You are required to find the number of pairs violating the BST property. In BST every element in left subtree must be less than every element in the right subtree. You are required to complete the function pairsViolatingBST(Node *root, int N).

 

Input:

The first line consists of an integer T denoting the number of test cases. Each test case consists of two lines. The first line of each test case consists of a single integer N, denoting the number of edges in the Binary tree. The next line contains the edges of the binary tree. Each edge consists of two integers and one character first of whose is parent node, second is child node and character "L" representing Left child and "R" representing the right child. 
 

Output:

You are required to complete the function pairsViolatingBST(Node *root, int N) which takes the root of the tree and the number of edges N as the arguments. The function returns the required number of pairs. As the results can be large, return your result modulo 10^9 + 7 

Constraints:

1 <= T <= 1000                

1 <= N < 10^5     

 

Example:

Input:

2

6

50 30 L 50 60 R 30 20 L 30 25 R 60 10 L 60 40 R

2

4 5 L 4 6 R

Output:

7

1

Explanation:

The binary tree for 1st test case is-

                  50

            /             \

      30                   60

    /     \                /      \
    20       25         10       40

The pairs violating the BST property are: (20, 10), (25, 10), (30, 25), (30, 10), (50, 10), (50, 40), (60, 40). Hence, the result is 7.

 

The binary tree for 2nd test case is-

            4
     /              \
    5                 6

The pair violating the BST property is: (5, 4). Hence, the result is 1.


### Question 2
Given two BSTs, return elements of both BSTs in sorted form

Input:
BST1:

       5
    /   \ 
    3     6
    / \
    2   4  

BST2:

      2
    /   \
    1     3
            \
            7
            /
            6

Output: 1 2 2 3 3 4 5 6 6 7
Explanation: 
After merging and sorting the
two BST we get 1 2 2 3 3 4 5 6 6 7.


Expected Time Complexity: O(M+N) where M and N are the sizes if the two BSTs.
Expected Auxiliary Space: O(Height of BST1 + Height of BST2).


### Question 2
Given a Singly Linked List which has data members sorted in ascending order. Construct a Balanced Binary Search Tree which has same data members as the given Linked List.
Note: There might be nodes with same value.

Input:
Linked List: 1->2->3->4->5->6->7
Output:
4 2 1 3 6 5 7
Explanation :
The BST formed using elements of the 
linked list is,

        4
      /   \
     2     6
    /  \   / \
    1   3  5   7  
Hence, preorder traversal of this 
tree is 4 2 1 3 6 5 7

Input:
Linked List : 1->2->3->4
Ouput:
3 2 1 4
Exaplanation:
The BST formed using elements of the 
linked list is,

     3   
    /  \  
    2    4 
    /
    1

Hence, the preorder traversal of this 
tree is 3 2 1 4
            

