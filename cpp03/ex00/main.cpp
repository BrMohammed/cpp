#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    a.attack("bele");
    a.beRepaired(2);
    a.takeDamage(2);
    a.beRepaired(2);
    a.takeDamage(2);

   // delete a;
    return 0;
}