
/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include "genericclasses.hpp"


int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    cout<<"\n";
    float input3, input4;
    cin>>input3;
    cin>>input4;    
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}
