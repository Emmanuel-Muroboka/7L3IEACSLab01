#include <iostream>
#include "problem3.h"

void swap1(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//pointer swapping
void swapversion1()
{
    std::cout << "===PROBLEM 3===" << "\nSwap Version 1" << std::endl;
    int var1, var2;
    std::cout << "Enter your integer 1: "; std::cin >> var1;
    std::cout << "Enter your integer 2: "; std::cin >> var2;

    swap1(&var1, &var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

}

//reference swapping
void swapversion2()
{
    std::cout << "\nSwap Version 2" << std::endl;
    int var1, var2;
    std::cout << "Enter your integer 1: "; std::cin >> var1;
    std::cout << "Enter your integer 2: "; std::cin >> var2;

    swap2(var1, var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

}
