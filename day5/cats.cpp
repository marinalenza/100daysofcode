/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "cats.hpp"

int main()
{
    // Create two cats of class Cats
    Cats cat1;
    Cats cat2;
    cat1.setName("Milk");
    cat2.setName("Coffee");
    cat1.setAge(3);
    cat2.setAge(5);
    cat1.setBreed("Meow");
    cat2.setBreed("Flavour");
    cat1.printInfo();
    cout<<"\n";
    cat2.printInfo();
    
    return 0;
}