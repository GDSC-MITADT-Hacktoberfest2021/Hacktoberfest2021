
# Queue Easy Questions



### Question 1
Implement a Queue using an Array. Queries in the Queue are of the following type:

(i) 1 x   (a query of this type means  pushing 'x' into the queue)

(ii) 2     (a query of this type means to pop element from queue and print the poped element)

Example 1:

Input:
Q = 5
Queries = 1 2 1 3 2 1 4 2

Output: 2 3

Explanation:

In the first test case for query 

1 2 the queue will be {2}

1 3 the queue will be {2 3}

2   poped element will be 2 the 
    queue will be {3}

1 4 the queue will be {3 4}

2   poped element will be 3 

Example 2:

Input:
Q = 4
Queries = 1 3 2 2 1 4   

Output: 3 -1

Explanation:

In the second testcase for query 

1 3 the queue will be {3}

2   poped element will be 3 the
    queue will be empty

2   there is no element in the
    queue and hence -1

1 4 the queue will be {4}.


### Question 2
Implement a Queue using 2 stacks s1 and s2 .

A Query Q is of 2 Types

(i) 1 x (a query of this type means  pushing 'x' into the queue)

(ii) 2   (a query of this type means to pop element from queue and print the poped element)

Example 1:

Input:
5
1 2 1 3 2 1 4 2

Output: 
2 3

Explanation: 

In the first testcase

1 2 the queue will be {2}

1 3 the queue will be {2 3}

2   poped element will be 2 the queue 
    will be {3}

1 4 the queue will be {3 4}

2   poped element will be 3.

Example 2:

Input:
4
1 2 2 2 1 4


Output: 
2 -1


Explanation: 

In the second testcase 

1 2 the queue will be {2}

2   poped element will be 2 and 
    then the queue will be empty

2   the queue is empty and hence -1

1 4 the queue will be {4}.


### Question 3
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue

dequeue() : Remove an item from front of queue

size() : Returns number of elements in queue.

front() : Finds front item.

Example 1:

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.

Example 2:

Input:
4 4
4 3 2 1

Output: 
1 2 3 4

Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.