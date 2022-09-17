#include "HumanB.hpp"

void HumanB::attack(void)
{
   if(_weapon)
        std::cout << this->_name <<" attacks with their " << _weapon->getType() << std::endl;

}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}