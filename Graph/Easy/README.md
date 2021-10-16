
# Graph Easy Questions


### Question 1
Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.

Input:

        0----1
       /   / | \
      /  /   |  \
       4-----3---2


Output: 

0-> 1-> 4 

1-> 0-> 2-> 3-> 4 

2-> 1-> 3 

3-> 1-> 2-> 4 

4-> 0-> 1-> 3

Explanation:
As 0,1 and 3 is connected to 4 so 4th row
of the list containing 4 and its connected
nodes 0,1 and 3 and we have to add those in
sorted order and same for every row.


Input:

        0        1
        |  \     |
        |    \   |
        |      \ |
        3        2


Output: 

0-> 2-> 3 

1-> 2 

2-> 0-> 1 

3-> 0

Explanation:
As 2 and 3 is connected to 0 so 0th row
of the list containing 0 and its connected 
nodes 2 and 3 and we have to add those in
sorted order and same for every row. 

### Question 2

Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

           1<--0-->3
                ↘
                  2
                  ↓
                  4


Output: 0 1 2 3 4

Explanation: 
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3.After this 2 to 4, thus bfs will be
0 1 2 3 4.


### Question 3

Given a connected undirected graph. Perform a Depth First Traversal of the graph.
Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..

                     0
                   ↙ ↓ ↘
                  1  2    4
                        ↙
                       3


    Output: 0 1 2 4 3
Explanation: 

0 is connected to 1, 2, 4.

1 is connected to 0.

2 is connected to 0.

3 is connected to 4.

4 is connected to 0, 3.

so starting from 0, it will go to 1 then 2
then 4, and then from 4 to 3.

Thus dfs will be 0 1 2 4 3.