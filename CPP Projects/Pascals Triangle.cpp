#include <iostream>
using namespace std;

void pascal (int rows)
{
  int coef = 1;
  

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

}
int main(){
      
      int rows;
      cout << "Enter number of rows: ";
      // Input number of rows for Pascal's Triangle
      cin >> rows;
      pascal(rows);
      //Function call to print Pascal's Triangle
       return 0;
}