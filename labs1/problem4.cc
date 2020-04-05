#include "problem4.h"
#include <iostream>
void b_sort(){

    int temp=0;
    int * arr;
    std::cout<<"Please insert 10 numbers"<<std::endl;
    for (int i=0 ;i<=10;i++)
    {
       std::cin>> i;

    }
    //befor sorting
    std::cout<<"\n Data before sorting :"<<std::endl;
    for(int j=0;j<=10 ;j++)
    {

        std::cout<<" "<<arr[j];
    }
    for(int i=0;i<=10;i++)
    {
    for(int j=0;j<=10-i;j++)
    {
    if(arr[j]>arr[j+1])
    {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;

    }//end for1
    }//end for2
}//end of for3

    std::cout<<"\n Data after sorting: "<<std::endl;
    for(int j=0;j<=10 ;j++)
    {
   std:: cout<<" "<<arr[j];
    }
}
