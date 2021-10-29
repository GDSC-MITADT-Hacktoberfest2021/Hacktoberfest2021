#include <bits/stdc++.h>
using namespace std;
   

class Solution
{
  public:
    Node *insertAtBegining(Node *head, int x) 
    {
        Node *newNode=new Node(x);
        newNode->next=head;
        head=newNode;
        return head;
    }
    
    Node *insertAtEnd(Node *head, int x) 
    {
        if(!head)
        {
            return insertAtBegining(head,x);
        }
        else
        {
            Node *newNode=new Node(x),*tmp=head;
            while(tmp->next)
            {
                tmp=tmp->next;
            }
            tmp->next=newNode;
            return head;
        }
    }
};
