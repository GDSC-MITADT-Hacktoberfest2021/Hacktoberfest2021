
# Graph Medium Questions


### Question 1
Given a grid of size n*n filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
The description of cells is as follows:

A value of cell 1 means Source.
A value of cell 2 means Destination.
A value of cell 3 means Blank cell.
A value of cell 0 means Wall.
Note: There are only a single source and a single destination.
 

Example 1:

Input: 
grid = 

                {{3,0,3,0,0},

                {3,0,0,0,3},

                {3,3,3,3,3},

                {0,2,3,0,0},

                {3,0,0,1,3}}

Output: 0

Explanation: The grid is-

                    3 0 3 0 0 

                    3 0 0 0 3 

                    3 3 3 3 3 

                    0 2 3 0 0 

                    3 0 0 1 3 

There is no path to reach at (3,1) i,e at 
destination from (4,3) i,e source.

Example 2:

Input: 
grid = 

                {{1,3},

                {3,2}}

Output: 1

Explanation: The grid is-

                1 3

                3 2

There is a path from (0,0) i,e source to (1,1) 
i,e destination.


### Question 2
Given a binary grid. Find the distance of nearest 1 in the grid for each cell.
The distance is calculated as |i1 – i2| + |j1 – j2|, where i1, j1 are the row number and column number of the current cell and i2, j2 are the row number and column number of the nearest cell having value 1.

Example 1:

Input: grid = {{0,1,1,0},{1,1,0,0},{0,0,1,1}}

Output: {{1,0,0,1},{0,0,1,1},{1,1,0,0}}

Explanation: The grid is-
            
            0 1 1 0 
            1 1 0 0 
            0 0 1 1 

0's at (0,0), (0,3), (1,2), (1,3), (2,0) and
(2,1) are at a distance of 1 from 1's at (0,1),
(0,2), (0,2), (2,3), (1,0) and (1,1)
respectively.

Example 2:

Input: grid = {{1,0,1},{1,1,0},{1,0,0}}

Output: {{0,1,0},{0,0,1},{0,1,2}}

Explanation: The grid is-

            1 0 1
            1 1 0
            1 0 0

0's at (0,1), (1,2), (2,1) and (2,2) are at a 
distance of 1, 1, 1 and 2 from 1's at (0,0),
(0,2), (2,0) and (1,1) respectively.


### Question 3
Given a weighted, undirected and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.
Note: The Graph doesn't contain any negative weight cycle
( Dijkstra Algorithm  )

Input:

         0 ⬅ Source
        /9 
       1

S = 0
Output:
0 9
Explanation:
The source vertex is 0. Hence, the shortest 
distance of node 0 is 0 and the shortest 
distance from node 9 is 9 - 0 = 9.
 

Example 2:

Input:

                0
             1/   \6
            1------ 2 ⬅ Source
                3
S = 2
Output:
4 3 0
Explanation:
For nodes 2 to 0, we can follow the path-
2-1-0. This has a distance of 1+3 = 4,

whereas the path 2-0 has a distance of 6. So,
the Shortest path from 2 to 0 is 4.

The other distances are pretty straight-forward

