#include<bits/stdc++.h>
using namespace std;
  

struct Node
{
  int data;
  struct Node* next;
};
  

void printNthFromLast(struct Node *head, int n) //Function for finding node from last
{
  struct Node *main_ptr = head;
  struct Node *ref_ptr = head;
  
  int count = 0;
  if(head != NULL)
  {
     while( count < n )
     {
        if(ref_ptr == NULL)
        {
           printf("%d is greater than the no. of "
                    "nodes in list", n);
           return;
        }
        ref_ptr = ref_ptr->next;
        count++;
     } /* End of while*/
      
     if(ref_ptr == NULL)
     {
        head = head->next;
        if(head != NULL)
            printf("Node no. %d from last is %d ", n, main_ptr->data);
     }
     else
     {
       while(ref_ptr != NULL)
       {
          main_ptr = main_ptr->next;
          ref_ptr  = ref_ptr->next;
       }
       printf("Node no. %d from last is %d ", n, main_ptr->data);
     }
  }
}
  
// Function to push
void push(struct Node** head_ref, int new_data)
{
  
  struct Node* new_node = new Node(); 
  
  new_node->data  = new_data;
  
  new_node->next = (*head_ref);    
  
  (*head_ref)    = new_node;
}
//to print the linked list
void print(struct Node*head_ref)
{
    struct Node*temp=head_ref;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
  

int main()
{
  
  struct Node* head = NULL;
  int n,pos;
  cout<<"enter the number of nodes:";
  cin>>n;
  for(int i=0;i<n;i++){
      cout<<"enter "<<i+1<<" node:";
      int ele;
      cin>>ele;
  push(&head, ele);
  }
  cout<<"your linked list is:"<<endl;
  print(head);
  cout<<endl;
  cout<<"enter the position:";
  cin>>pos;
  printNthFromLast(head, pos);
}
