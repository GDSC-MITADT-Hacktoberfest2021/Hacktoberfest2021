
# Gready Easy Questions


### Question 1
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.


Example 1:

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}

Output: 
1

Explanation:
A person can perform only one of the
given activities.

Example 2:

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}

Output: 
3

Explanation:
A person can perform activities 1, 2
and 4.

### Question 2
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}

Output: 
4

Explanation:
Maximum four meetings can be held with
given start and end timings.
The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

Example 2:

Input:
N = 3
start[] = {10, 12, 20}
end[] = {20, 25, 30}

Output: 
1

Explanation:
Only one meetings can be held
with given start and end timings.

Expected Time Complexity : O(N*LogN)
Expected Auxilliary Space : O(N)

### Question 3
Alex lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

Example 1:

Input:
N = 5, S = 12

Output:
93000

Explanation:
Sum of elements is 12. Largest possible 
5 digit number is 93000 with sum 12.

Example 2:

Input:
N = 3, S = 29

Output:
-1

Explanation:
There is no such three digit number 
whose sum is 29.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)