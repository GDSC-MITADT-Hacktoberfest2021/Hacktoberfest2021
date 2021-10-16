
# Gready Medium Questions


### Question 1
Given a set of N jobs where each jobi has a deadline and profit associated with it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the number of jobs done and the maximum profit.

Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.


Example 1:

Input:
N = 4

Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}

Output:
2 60

Explanation:
Job1 and Job3 can be done with
maximum profit of 60 (20+40).

Example 2:

Input:
N = 5

Jobs = {(1,2,100),(2,1,19),(3,2,27),
        (4,1,25),(5,1,15)}

Output:
2 127

Explanation:
2 jobs can be done with
maximum profit of 127 (100+27).

### Question 2

Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

 

Example 1:

Input:
N = 3, W = 50

values[] = {60,100,120}
weight[] = {10,20,30}

Output:
240.00

Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.

Example 2:

Input:
N = 2, W = 50

values[] = {60,100}
weight[] = {10,20}

Output:
160.00

Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.