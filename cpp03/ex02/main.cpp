#include "FragTrap.hpp"

int main()
{
    FragTrap a("m1");
    a.highFivesGuys();
    a.attack("bela"); 
    a.beRepaired(2);
    a.takeDamage(2);
    a.beRepaired(2);
    a.takeDamage(2);
   // delete a;
    return 0;
}