#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}
std::string Weapon::getType()
{
    return(this->type);
}
void Weapon::setType(const std::string &type)
{
    this->type = type;
}