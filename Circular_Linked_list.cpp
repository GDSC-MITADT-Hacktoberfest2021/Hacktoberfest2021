# include <iostream>
using namespace std;
template <class T>
class cnode{
    public:
    T info;
    cnode<T> *next;
    cnode(T x , cnode<T> *n=NULL)
    {
        info=x;
        next=n;
    }

};
template <class T>
class cll{
cnode<T> *cursor;
public:
cll()
{
    cursor=NULL;
}
void input();
int isempty();
void addtofront(T x );
void addtoback(T x);
T deletefromfront();
T deletefromback();
cnode<T>* isinlist(T x);
void deletenode(T x);
void display();
cll<T> operator+(cll <T> l1);
void addafter(T x, T y);
};
template<class T>
void cll<T>::input(){
     int n;
     T x;
     cout<<"Enter the no of nodes in CLL ";
     cin>>n;
     for(int i=0; i<n; i++)
     {
         cout<<"Enter the info part of the node"<<i+1<<" : ";
         cin>>x;
         addtoback(x);
     }
}
template <class T>
int cll<T>::isempty()
{
    if(cursor==NULL)
        return 1;
    else
        return 0;

}
template <class T>
void cll<T>::addtofront(T x){
    cnode<T> *temp=new cnode<T>(x);
    if(isempty())
    {
        cursor->next=temp;
        temp->next=cursor;
    }
    else
    {
         temp->next=cursor->next;
        cursor->next=temp;
    }
}
template <class T>
void cll<T>::addafter(T x, T y)
{
    cnode<T> *nptr=new cnode<T>(x);
    cnode<T> *temp;
    temp=cursor->next;
    do
    {
       if(temp->info==y)
       {
           if(temp==cursor)
           {
             addtoback(x);
           }
           else
           {
               nptr->next=temp->next;
                temp->next=nptr;
           }
       }
      temp=temp->next;
    }while(temp!=cursor->next);

}
template <class T>
void cll<T>::addtoback(T x){
    cnode<T> *temp=new cnode<T>(x);
    if(isempty())
    {
        cursor=temp;
        cursor->next=cursor;
    }
    else
    {
       temp->next=cursor->next;
       cursor->next=temp;
       cursor=temp;
    }

}
template <class T>
T cll<T>::deletefromfront()
{
    cnode <T>*temp;
    T x;
    x=cursor->next->info;
    if(cursor->next==cursor)
    {
        delete cursor;
        cursor=NULL;
    }
    else
    {
        temp=cursor->next;
        cursor->next=temp->next;
        delete temp;
    }
    return x;

}
template <class T>
T cll<T>::deletefromback()
{
    cnode<T> *temp;
    T x=cursor->info;
    if(cursor->next==cursor)
    {
        delete cursor;
        cursor=NULL;
    }
    else
    {
        temp=cursor->next;
        while(temp->next!=cursor)
        {
            temp=temp->next;
        }
        temp->next=cursor->next;
        delete cursor;
        cursor=temp;
    }
    return x;
}
template <class T>
void cll<T>::deletenode(T x)
{
    cnode<T> *prev;
    cnode<T> *current;
    if(cursor->next==cursor && cursor->info==x)
    {
        delete cursor;
        cursor=NULL;
    }
    else if(cursor->next->info==x)
    {   current=cursor->next;
        cursor->next=current->next;
        delete current;

    }
    else
    {
        prev=cursor->next;
        current=prev->next;
        while(current!=cursor && current->info!=x)
        {
            prev=current;
            current=current->next;
        }
        if(current!=cursor->next)
        {
            prev->next=current->next;
            if(current==cursor)
            {
                cursor=prev;}
                delete current;
            }
            else{
                cout<<"Element not found"<<endl;
            }
        }
}
template <class T>
 cnode<T>* cll<T>::isinlist(T x){
        cnode <T> *temp;
        temp=cursor->next;
        do
        {
            if(temp->info==x)
            {
               return temp;
            }

         temp=temp->next;

        }while(temp!=cursor->next);
        return NULL;
 }
template <class T>
cll<T> cll<T>::operator+(cll<T> l1)
{
     cll<T> l3;
     cnode<T> *temp;

     if(!(*this).isempty())
     {
         temp=(*this).cursor->next;
         do{
            l3.addtoback(temp->info);
            temp=temp->next;
         }while(temp!=(*this).cursor->next);

     }
     if(!l1.isempty())
     {
         temp=l1.cursor->next;

         do{
             l3.addtoback(temp->info);
             temp=temp->next;
         }while(temp!=l1.cursor->next);
     }
     return l3;
}
template <class T>
void cll<T>::display()
{
       cnode<T> *temp;
       temp=cursor->next;
       if(isempty())
       {
           cout<<"List is empty"<<endl;
       }
       else
       {
        do
       {
           cout<<temp->info<<"\t";
           temp=temp->next;
       }while(temp!=cursor->next);
       cout<<endl;
       }

}
int main()
{
    cll <int>l1;
    cll <int> l2;
    cll <int> l3;
    int e,a,d,choice,c1,x,n;
    char c='y';
    cnode<int> *temp;
    l1.input();
    cout<<"Circular Linked list is : "<<endl;
    l1.display();
    while(c=='y')
    {
        cout<<"Main Menu :-"<<endl;
        cout<<"1. Add element at Begining"<<endl;
        cout<<"2. Add element at end"<<endl;
        cout<<"3. Delete element from Begining"<<endl;
        cout<<"4. Delete elemet from End"<<endl;
        cout<<"5. Search element"<<endl;
        cout<<"6. Concatenate two Cll"<<endl;
        cout<<"7. Display CLL"<<endl;
        cout<<"8. Add a node after given node"<<endl;
        cout<<"9. Delete the given node"<<endl;
        cout<<"Enter your choice";
        cin>>choice;
        switch (choice)
        {
        case 1:   cout<<"Enter the info part of the node to be added ";
                  cin>>x;
                  l1.addtofront(x);
                  l1.display();
                  break;
        case 2:   cout<<"Enter the info part of the node to be added ";
                  cin>>x;
                  l1.addtoback(x);
                  cout<<"Your CLL is "<<endl;
                  l1.display();
                  break;
        case 3:   if(!(l1.isempty()))
                  {
                     d= l1.deletefromfront();
                     cout<<d<<" has been deleted from CLL";
                     cout<<"Your CLL is"<<endl;
                     l1.display();
                  }
                  else
                  {
                      cout<<"Underflow! CLL is empty"<<endl;
                  }
                  break;
        case 4:    if(!(l1.isempty()))
                  {
                     d= l1.deletefromback();
                     cout<<d<<" has been deleted from CLL";
                     cout<<"Your CLL is"<<endl;
                     l1.display();
                  }
                  else
                  {
                      cout<<"Underflow! CLL is empty"<<endl;
                  }
                  break;
        case 5:  if(l1.isempty())
                 {
                     cout<<"List is empty"<<endl;
                 }
                 else
                 {    cout<<"Enter the info part of the node you want to check";
                      cin>>x;
                     temp=l1.isinlist(x);
                     if(temp==NULL)
                     {
                          cout<<x<<" node is not in the CLL"<<endl;

                     }
                     else
                     {
                        cout<<x<<" node is in CLL"<<endl;
                     }
                 }
                 break;
        case 6:  l2.input();
                 cout<<"Your 2nd Cll is"<<endl;
                 l2.display();
                 l3=l1+l2;
                 cout<<"Your concatenated list is"<<endl;
                 l3.display();
                 break;
        case 7:  cout<<"Your CLL is :"<<endl;
                 l1.display();
                 break;
        case 8:  if(!(l1.isempty()))
                 {
                     cout<<"Enter the info part of the node after which you want to add";
                     cin>>a;
                     cout<<"Enter the info part of the new node : ";
                     cin>>x;
                     l1.addafter(x,a);
                     cout<<"CLL is :"<<endl;
                     l1.display();
                 }
                 else{
                    cout<<"CLL is empty so specified node is absent"<<endl;
                 }
                 break;
        case 9: if(!(l1.isempty()))
                 {
                     cout<<"Enter the info part of the node which you want to delete";
                     cin>>a;
                     l1.deletenode(a);
                     cout<<"Your CLL is"<<endl;
                     l1.display();

                 }
                 else
                 {
                     cout<<"List is empty"<<endl;
                 }
                 break;

        default: cout<<"You entered a wrong choice"<<endl;
                  break;
        }
        cout<<"Do you want to continue ? ";
        cin>>c;
    }
return 0;
}

