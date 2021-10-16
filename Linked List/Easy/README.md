
# Linked List Easy Questions



### Question 1
Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
Hint: When inserting at the end, make sure that you handle NULL explicitly.

Example 1:

Input:
LinkedList: 9->0->5->1->6->1->2->0->5->0

Output: 5 2 9 5 6

Explanation:
Length of Link List = N = 5
9 0 indicated that 9 should be
inserted in the beginning. Modified
Link List = 9.

5 1 indicated that 5 should be
inserted in the end. Modified Link
List = 9,5.

6 1 indicated that 6 should be
inserted in the end. Modified Link
List = 9,5,6.

2 0 indicated that 2 should be
inserted in the beginning. Modified
Link List = 2,9,5,6.

5 0 indicated that 5 should be
inserted in the beginning. Modified
Link List = 5,2,9,5,6. 

Final linked list = 5, 2, 9, 5, 6.

Example 2:

Input:
LinkedList: 5->1->6->1->9->1

Output: 5 6 9


### Question 2
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

Example 1:

Input:
N = 2
value[] = {1,2}
node = 1

Output: 2

Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.

Example 2:

Input:
N = 4
value[] = {10,20,4,30}
node = 20

Output: 10 4 30

Explanation: After deleting 20 from
the linked list, we have remaining
nodes as 10, 4 and 30.

### Question 3
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

Example 1:

Input:
LinkedList: 2->2->4->5

Output: 2 4 5

Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.

Example 2:

Input:
LinkedList: 2->2->2->2->2

Output: 2

Explanation: In the given linked list 
2 ->2 ->2 ->2 ->2, 2 is the only element
and is repeated 5 times.  