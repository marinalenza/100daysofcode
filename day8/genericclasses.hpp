/*header file*/
#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
    T M1;
    T M2;
    T product;
    public:
    void setM1(T input1);
    void setM2(T input2);
    void setProduct();
    void printEquation();
};

template <class T>
void Multiplier<T>::setM1(T input1)
{
    M1 = input1;
}

template <class T>
void Multiplier<T>::setM2(T input2)
{
    M2 = input2;
}

template <class T>
void Multiplier<T>::setProduct()
{
    product = M1*M2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    cout<<M1<<" x "<<M2<<" = "<<product;
}