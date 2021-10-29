#include <iostream>  
using namespace std;  
void triangle(int rows)  
{  
 char ch='A';    
    int i, j, k, m;    
    for(i=1;i<=rows;i++)    
    {    
        for(j=rows;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
}  
int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    triangle(rows);
    return 0;
}