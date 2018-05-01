/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>

int main()
{
    int sum = 0;
    int number;
    for(int i=0;i<5;i++){
        std::cin>>number;
        sum+=number;
    }
    std::cout<<"Sum = "<<sum<<"\n"<<"Average = "<<sum/5.0;
    return 0;
}