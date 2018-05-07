/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog
{
    string name;
    int license;
    public:
    Dog();
    Dog(string nameIn);
    Dog(int licensenumber);
    Dog(string nameIn,int licensenumber);
    string getName();
    int getLicense();
};

Dog::Dog(){
    name = "NA";
    license = 0;
}

Dog::Dog(string nameIn){
    name = nameIn;
    license = 0;
}

Dog::Dog(int licensenumber){
    name = "NA";
    license = licensenumber;
}

Dog::Dog(string nameIn,int licensenumber){
    name = nameIn;
    license = licensenumber;
}

string Dog::getName(){
    return name;
}

int Dog::getLicense(){
    return license;
}
