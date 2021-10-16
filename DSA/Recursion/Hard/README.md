
# Recursion Hard Questions





### Question 1
Given a String S, Find all possible Palindromic partitions of the given String.
 

Example 1:

Input:

    S = "geeks"
    Output:
    g e e k s
    g ee k s
    Explanation:
    All possible palindromic partitions
    are printed.
Example 2:

    Input:
    S = "madam"
    Output:
    m a d a m
    m ada m
    madam


### Question 2
Given a string s and a dictionary of words dict of length n, add spaces in s to construct a sentence where each word is a valid dictionary word. Each dictionary word can be used more than once. Return all such possible sentences.

Follow examples for better understanding.

Example 1:

    Input: s = "catsanddog", n = 5 
    dict = {"cats", "cat", "and", "sand", "dog"}
    Output: (cats and dog)(cat sand dog)
    Explanation: All the words in the given 
    sentences are present in the dictionary.
Example 2:

    Input: s = "catsandog", n = 5
    dict = {"cats", "cat", "and", "sand", "dog"}
    Output: Empty
    Explanation: There is no possible breaking 
    of the string s where all the words are present 
    in dict.