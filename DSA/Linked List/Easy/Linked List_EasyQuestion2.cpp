
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
