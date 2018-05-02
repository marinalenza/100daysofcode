/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    int aux;
    for(int i = 0; i <40; i++) //input
    {
       std::cin>>userInput[i]; 
    }
    for(int i = 0; i <40; i++) //stream in direct order
    {
       std::cout<<userInput[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i = 39; i >= 0; i--) //stream in reverse order
    {
       std::cout<<userInput[i]<<" "; 
    }
    std::cout<<std::endl;
    for(int i = 0; i <40; i++) //sort in ascending order
    {
        for(int n = i+1; n <40; n++)
    {
       if (userInput[n]<userInput[i]){
           aux = userInput[i];
           userInput[i] = userInput[n];
           userInput[n] = aux;
       }
    }
    }
    for(int i = 0; i <40; i++) //stream in ascending order
    {
       std::cout<<userInput[i]<<" ";
    }
    return 0;
}