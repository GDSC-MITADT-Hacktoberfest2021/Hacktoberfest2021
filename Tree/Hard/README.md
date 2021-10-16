
# Tree Hard Questions





### Question 1
Given a binary tree, connect the nodes that are at same level. You'll be given an addition nextRight pointer for the same.

Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.

       10                       10 ------> NULL
      / \                       /      \
     3   5       =>           3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2               4 --> 1 -----> 2 -------> NULL

 

Example 1:

    Input:
      3
    /  \
    1    2
    Output:
    3 1 2
    1 3 2
    Explanation:The connected tree is
           3 ------> NULL
        /    \
        1-----> 2 ------ NULL
Example 2:

    Input:
      10
    /   \
    20   30
    /  \
    40  60
    Output:
    10 20 30 40 60
    40 20 60 10 30
    Explanation:The connected tree is
            10 ----------> NULL
        /     \
        20 ------> 30 -------> NULL
    /    \
    40 ----> 60 ----------> NULL

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N)

### Question 2
Given a Binary Tree and a positive integer k. The task is to count all distinct nodes that are distance k from a leaf node. A node is at k distance from a leaf if it is present k levels above the leaf and also, is a direct ancestor of this leaf node. If k is more than the height of Binary Tree, then nothing should be counted.

Example 1:

    Input:
      1
    /   \
    2     3
    /  \   /  \
    4   5  6    7
            \ 
             8
    K = 2
    Output: 2
    Explanation: There are only two unique
    nodes that are at a distance of 2 units
    from the leaf node. (node 3 for leaf
    with value 8 and node 1 for leaves with
    values 4, 5 and 7)
    Note that node 2
    isn't considered for leaf with value
    8 because it isn't a direct ancestor
    of node 8.
Example 2:

    Input:
            1
            /
          3
        /
      5
    /  \
    7    8
          \
            9
    K = 4
    Output: 1
    Explanation: Only one node is there
    which is at a distance of 4 units
    from the leaf node.(node 1 for leaf
    with value 9) 