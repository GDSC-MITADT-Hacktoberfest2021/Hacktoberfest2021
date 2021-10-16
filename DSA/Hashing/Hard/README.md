
# Hashing Hard Questions



### Question 1
Given two Arrays A[] and B[] of length N and M respectively. Find minimum number of insertions and deletions on the array A[], required to make both the arrays identical.
Note: Array B[] is sorted and all its elements are distinct.

 

Example 1:

Input:
N = 5, M = 3

A[] = {1, 2, 5, 3, 1}
B[] = {1, 3, 5}

Output:
4

Explanation:
We need to delete 2 and replace it with 3.
This costs 2 steps. Further, we will have to
delete the last two elements from A to
obtain an identical array to B. Overall, it
results in 4 steps.

Example 2:
Input:
N = 2, M = 2

A[] = {1, 4}
B[] = {1, 4}

Output :
0

Explanation:
Both the Arrays are already identical.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)

### Question 2
Design a data structure that works like a LRU Cache. Here cap denotes the capacity of the cache and Q denotes the number of queries. Query can be of two types:

SET x y : sets the value of the key x with value y

GET x : gets the key of x if present else returns -1.

The LRUCache class has two methods get() and set() which are defined as follows.

get(key)   : returns the value of the key if it already exists in the cache otherwise returns -1.

set(key, value) : if the key is already present, update its value. If not present, add the key-value pair to the cache. If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.

In the constructor of the class the capacity of the cache should be intitialized.
 

Example 1:

Input:
cap = 2
Q = 2

Queries = SET 1 2 GET 1

Output: 2

Explanation: 
Cache Size = 2

SET 1 2 GET 1

SET 1 2 : 1 -> 2

GET 1 : Print the value corresponding
to Key 1, ie 2.

Example 2:

Input:
cap = 2
Q = 8

Queries = SET 1 2 SET 2 3 SET 1 5

SET 4 5 SET 6 7 GET 4 SET 1 2 GET 3

Output: 5 -1

Explanation: 

Cache Size = 2

SET 1 2 : 1 -> 2

SET 2 3 : 1 -> 2, 2 -> 3 (the most recently 

used one is kept at the rightmost position) 

SET 1 5 : 2 -> 3, 1 -> 5

SET 4 5 : 1 -> 5, 4 -> 5 (Cache size is 2, hence 

we delete the least recently used key-value pair)

SET 6 7 : 4 -> 5, 6 -> 7 

GET 4 : Prints 5 (The cache now looks like
6 -> 7, 4->5)

SET 1 2 : 4 -> 5, 1 -> 2 
(Cache size is 2, hence we delete the least 
recently used key-value pair)

GET 3 : No key value pair having 
key = 3. Hence, -1 is printed.