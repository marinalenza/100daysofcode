/*The header file for main.cpp*/
#include <iostream>

void calculate(float &input1,float &input2,char operation,float &result)
{
    if (operation == '+')
    {
        result = input1 + input2;
    }
    else if(operation == '-')
    {
        result = input1 - input2;
    }
    else if(operation == '*')
    {
        result = input1 * input2;
    }
    else if(operation == '/')
    {
        result = input1 / input2;
    }
}

void printEquation(float &input1,float &input2,char operation,float &result)
{
    std::cout<<input1<<" "<<operation<<" "<<input2<<" = "<<result;   
}