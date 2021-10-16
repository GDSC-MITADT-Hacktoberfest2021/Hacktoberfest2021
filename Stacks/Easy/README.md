
# Stack Easy Questions





### Question 1
Write a program to implement a Stack using Array. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 

Example 1:

    Input: 
    push(2)
    push(3)
    pop()
    push(4) 
    pop()
    Output: 3, 4
    Explanation: 
    push(2)    the stack will be {2}
    push(3)    the stack will be {2 3}
    pop()      poped element will be 3,
            the stack will be {2}
    push(4)    the stack will be {2 4}
    pop()      poped element will be 4
Example 2:

    Input: 
    pop()
    push(4)
    push(5)
    pop()
    Output: -1, 5


### Question 2
Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Example 1:

    Input:
    {([])}
    Output: 
    true
    Explanation: 
    { ( [ ] ) }. Same colored brackets can form 
    balaced pairs, with 0 number of 
    unbalanced bracket.
Example 2:

    Input: 
    ()
    Output: 
    true
    Explanation: 
    (). Same bracket can form balanced pairs, 
    and here only 1 type of bracket is 
    present and in balanced way.
Example 3:

    Input: 
    ([]
    Output: 
    false
    Explanation: 
    ([]. Here square bracket is balanced but 
    the small bracket is not balanced and 
    Hence , the output will be unbalanced.


### Question 3
Your task is to implement  2 stacks in one array efficiently.

 

Example 1:

    Input:
    push1(2)
    push1(3)
    push2(4)
    pop1()
    pop2()
    pop2()

    Output:
    3 4 -1

    Explanation:
    push1(2) the stack1 will be {2}
    push1(3) the stack1 will be {2,3}
    push2(4) the stack2 will be {4}
    pop1()   the poped element will be 3 
    from stack1 and stack1 will be {2}
    pop2()   the poped element will be 4 
    from stack2 and now stack2 is empty
    pop2()   the stack2 is now empty hence -1 .