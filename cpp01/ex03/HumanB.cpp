#include "HumanB.hpp"

void HumanB::attack(void)
{
    std::cout << _name <<" attacks with their " << _weapon_type << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->_weapon_type = weapon->getType();
}