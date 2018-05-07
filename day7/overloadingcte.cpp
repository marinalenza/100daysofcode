/*Goal: create a class that has two 
*constructors; one that accepts
*input parameters and one that does
*not. 
*/

#include "overloadingcte.hpp"

int main()
{
    Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);
    
    cout<<d1.getName()<<" "<<d1.getLicense()<<"\n";
    cout<<d2.getName()<<" "<<d2.getLicense()<<"\n";
    cout<<d3.getName()<<" "<<d3.getLicense()<<"\n";
    cout<<d4.getName()<<" "<<d4.getLicense()<<"\n";
    return 0;
}