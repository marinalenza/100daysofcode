
#include <iostream>
#include <string>
using namespace std;

class Flower
{
    private:
        string bloomTime;
    public:
        Flower();
        void setBloomTime(string bloomIn);
        string getBloomTime();
};
Flower::Flower()
{
    bloomTime = "Unkown";
}

void Flower::setBloomTime(string bloomIn)
{
    bloomTime = bloomIn;
}

string Flower::getBloomTime()
{
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose:public Flower
{
    private:
        string fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
};

Rose::Rose()
{
    fragrance = "Unkown";
}

void Rose::setFragrance(string fragIn)
{
    fragrance = fragIn;
}

string Rose::getFragrance()
{
    return fragrance;
}

