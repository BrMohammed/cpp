#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string _name;
        std::string _weapon_type;
    public :
        HumanA();
        HumanA(std::string name,Weapon &weapon);
        void attack();

};

#endif