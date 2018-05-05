//You may use this file as a header file for the Dog class. 
//Make sure to include it in main.hpp file
using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
    name="Unkown";
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}
 
void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}
    
