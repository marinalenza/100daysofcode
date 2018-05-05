/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "dog.hpp"


int main()
{
    const int SIZE = 3;
    Dog roster[SIZE];
    roster[0].setName("Doggo");
    roster[1].setName("Doggy");
    roster[2].setName("Dogginho");
    roster[0].setLicenseNumber(230);
    roster[1].setLicenseNumber(140);
    roster[2].setLicenseNumber(396);
    printRoster(roster,SIZE);
    return 0;
}
