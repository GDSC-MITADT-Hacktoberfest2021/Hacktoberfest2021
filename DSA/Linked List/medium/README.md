
# Linked List Medium Questions



### Question 1
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9

Output: 8

Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8.  

Example 2:

Input:
N = 5
LinkedList: 10->5->100->5

Output: -1

Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.

### Question 2

Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present.  


Example 1:

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like

        1 -> 3 -> 4
            ^    |
            |____|

A loop is present. If you remove it 
successfully, the answer will be 1. 

Example 2:

Input:
N = 4
value[] = {1,8,3,4}
X = 0

Output: 1

Explanation: The Linked list does not 
contains any loop. 

Example 3:

Input:
N = 4
value[] = {1,2,3,4}
X = 1

Output: 1

Explanation: The link list looks like 

        1 -> 2 -> 3 -> 4

        |______________|
A loop is present. 
If you remove it successfully, 
the answer will be 1. 

### Question 3
Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

The sum list is a linked list representation of the addition of two input numbers from the last.

Example 1:

Input:
N = 2
valueN[] = {4,5}

M = 3
valueM[] = {3,4,5}

Output: 3 9 0  

Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

Example 2:

Input:
N = 2
valueN[] = {6,3}

M = 1
valueM[] = {7}

Output: 7 0

Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).