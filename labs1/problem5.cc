#include <iostream>
#include "problem5.h"

#include <iostream>

void printPascal(int n)
{

    for (int line = 1; line <= n; line++)
    {

        int firstValue = 1;

        for (int i = 1; i < (n - line + 1); i++){
            std::cout << " ";
        }

        for (int i = 1; i <= line; i++)
        {


            std::cout << firstValue << " ";
            firstValue = firstValue* (line - i) / i;
        }

        std::cout <<std::endl;
    }
}

int main()
{
    int n;

std::cout << "Give the N the number of rows of the triangle: "<<std::endl;

    std::cin >> n;
    std::cout << "Paacal Trinagle of "<<n<<"  line is as follows :"<<std::endl;


    printPascal(n);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include problem5();

int main()
{
    int row,coloum;
std::cout<<"Enter Rows of Matrix"<<std::endl;
std::cin>>row;
std::cout<<"Enter Coloums of Matrix"<<std::endl;
std::cin>>coloum;

int matrix[row][coloum];
int transpose[coloum][row];

std::cout<<"Enter Data in array"<<std::endl;
for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < coloum; j++)
        {
            std::cout<<"Enter element of Matrices ["<<i<<"]["<<j<<"]: ";
            std::cin>>matrix[i][j];
          }
       }

std::cout<<"The matrix is:"<<std::endl;
   for(int i=0; i<row; ++i) {
      for(int j=0; j<coloum;++j)
         std::cout<<matrix[i][j]<<" ";
      std::cout<<std::endl;
   }
   std::cout<<std::endl;
   for(int i=0; i<row; ++i)
      for(int j=0; j<coloum; ++j) {
         transpose[j][i] = matrix[i][j];
      }
   std::cout<<"The transpose of the matrix is:"<<std::endl;
   for(int i=0; i<row; ++i) {
      for(int j=0; j<coloum; ++j)
         std::cout<<transpose[i][j]<<" ";
         std::cout<<std::endl;

   }
   return 0;
   }
