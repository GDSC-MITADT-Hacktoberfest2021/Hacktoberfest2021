
# Gready Hard Questions





### Question 1
You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

Example 1:

Input:

push(2)

push(3)

pop()

getMin()

push(1)

getMin()

Output: 3 2 1

Explanation: In the first test case for
query 

push(2)  the stack will be {2}

push(3)  the stack will be {2 3}

pop()    poped element will be 3 the
         stack will be {2}

getMin() min element will be 2 

push(1)  the stack will be {2 1}

getMin() min element will be 1



### Question 2

Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).

Example 1:

Input:

LinkedList: 1->2->2->4->5->6->7->8

K = 4

Output: 4 2 2 1 8 7 6 5 

Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. 
Hence, the resultant linked list is 

4->2->2->1->8->7->6->5.

Example 2:

Input:

LinkedList: 1->2->3->4->5

K = 3

Output: 3 2 1 5 4 

Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.
Hence, 
the resultant linked list is 

3->2->1->5->4.

  