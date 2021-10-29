//Given a binary array A[] of size N. The task is to arrange the array in increasing order.
//Note: The binary array contains only 0 and 1.

//Time Complexity: O(n)
//Space Complexity: O(1)
#include <iostream>

using namespace std;

//Swapping of the elements
void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
}
//Binary Sorting
void BinarySort(int a[],int n)
{
    //No use of an extra array to store the elements in sorted order. Therefore Auxiliary Space: O(1)
    int p=0,q=n-1;  //Used two variables(so called pointers) to travel in different directions, hence changing the values too.

    //Time Complexity O(n) as it requires to traverse the whole array once(Almost half and half from each side.)
    while(q>p)
    {
        if(a[p]>a[q])
        {
            swap(a[p],a[q]);
            p++;
            q--;
        }
        else if(a[p]==a[q] && a[p]==1)
        {
            swap(a[p],a[q-1]);
            q--;
        }
        else if(a[p]==a[q] && a[q]==0)
        {
            swap(a[p+1],a[q]);
            p++;
        }
        else
        {
            p++;
            q--;
        }
    }
}

//Display the elements in the Array
void Display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Original Array: ";
    Display(a,n);
    BinarySort(a,n);
    cout<<endl<<"Sorted Array: ";
    Display(a,n);
    return 0;
}
