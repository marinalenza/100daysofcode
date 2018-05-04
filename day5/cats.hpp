/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
//class Cats
class Cats
{
    string name;
    string breed;
    int age;
    
    public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};

//class Public Members
void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}

string Cats::getName()
{
    return name;
}

string Cats::getBreed()
{
    return breed;
}

int Cats::getAge()
{
    return age;
}

void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}

