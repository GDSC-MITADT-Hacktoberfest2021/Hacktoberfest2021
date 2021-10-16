
# Backtracking Hard Questions





### Question 1
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time.

Input:

N = 4

 
        {{1, 0, 0, 0},

         {1, 1, 0, 1}, 
m[][] =
         {1, 1, 0, 0},

         {0, 1, 1, 1}}
Output:

DDRDRR DRDDRR

Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.

Input:
N = 2

m[][] = 

        {{1, 0},

         {1, 0}}
Output:
-1

Explanation:
No path exists and destination cell is 
blocked.


### Question 2
Given an undirected graph and an integer M. The task is to determine if the graph can be colored with at most M colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices. Print 1 if it is possible to colour vertices and 0 otherwise.

Input:
N = 4
M = 3
E = 5

Edges[] = {(0,1),(1,2),(2,3),(3,0),(0,2)}

Output: 1

Explanation: It is possible to colour the
given graph using 3 colours.

Input:
N = 3
M = 2
E = 3

Edges[] = {(0,1),(1,2),(0,2)}

Output: 0