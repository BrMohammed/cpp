#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << _name <<" attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name,Weapon &weapon) : _weapon(weapon)
{
    this->_name = name;
}