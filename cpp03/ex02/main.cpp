#include "FragTrap.hpp"

int main()
{
    FragTrap a("m1");
    a.attack("bela");
    a.beRepaired(2);
    a.takeDamage(2);
    a.beRepaired(2);
    a.takeDamage(2);
    a.highFivesGuys();
   // delete a;
    return 0;
}