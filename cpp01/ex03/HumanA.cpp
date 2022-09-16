#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << _name <<"attacks with their" << _weapon_type << std::endl;
}

HumanA::HumanA(std::string name,Weapon &weapon) : _weapon_type(weapon.getType())
{
    this->_name = name;
}