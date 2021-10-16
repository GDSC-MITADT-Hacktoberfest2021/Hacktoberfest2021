
# Graph Hard Questions


### Question 1
Given a square grid of size N, each cell of which contains integer cost which represents a cost to traverse through that cell, we need to find a path from top left cell to bottom right cell by which the total cost incurred is minimum.
From the cell (i,j) we can go (i,j-1), (i, j+1), (i-1, j), (i+1, j). 

Note: It is assumed that negative cost cycles do not exist in the input matrix.
 

Example 1:

Input: grid = 

        {{9,4,9,9},
        {6,7,6,4},
        {8,3,3,7},
        {7,4,9,10}}

Output: 43

Explanation: The grid is-

        9 4 - -
        - 7 - -
        - 3 3 7
        - - - 10

The minimum cost is-
9 + 4 + 7 + 3 + 3 + 7 + 10 = 43.
Example 2:

Input: grid = 
        
        {{4,4},
        {3,7}}

Output: 14

Explanation: The grid is-
            
            4 -
            3 7

The minimum cost is- 4 + 3 + 7 = 14.


### Question 2
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.

Input:

            0 → 1
                ↓
            3 ← 2
           ↻

Output: 1

Explanation: 3 -> 3 is a cycle

Input

        0 → 1
            ↓
            2

Output: 0

Explanation: no cycle in the graph