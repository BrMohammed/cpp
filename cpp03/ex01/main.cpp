#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("m1");
    a.attack("bela");
    a.beRepaired(2);
    a.takeDamage(2);
    a.beRepaired(2);
    a.takeDamage(2);
    a.guardGate();
   // delete a;
    return 0;
}