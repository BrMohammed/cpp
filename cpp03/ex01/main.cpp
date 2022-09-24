#include "ScavTrap.hpp"

int main()
{
    ClapTrap *a = new ClapTrap("e");

    a->attack("bela");
    a->beRepaired(2);
    a->takeDamage(2);
    a->beRepaired(2);
    a->takeDamage(2);

    delete a;
    return 0;
}