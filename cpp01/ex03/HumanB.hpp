#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string _name;
        std::string _weapon_type;
    public :
        HumanB();
        HumanB(std::string name);
        void setWeapon(Weapon *weapon);
        void attack();

};

#endif