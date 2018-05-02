//Find min, max and average values of 15 input numbers

#include <iostream>

int main()
{
    int n1,n2;
    int Min, Max;
    float Average;
    std::cin>>n1;
    Max = n1;
    Min = n1;
    Average = n1;
    for (int i=0;i<14;i++)
    {
        std::cin>>n2;
        Average += n2;
        if(n2>Max)
        {
            Max = n2;
        }
        if(n2<Min)
        {
            Min = n2;
        }
    }
    
    Average /=15;
    std::cout<<"Max = "<<Max<<"\t"<<"Min = "<<Min<<"\t"<<"Average = "<<Average;
    
    return 0;
}